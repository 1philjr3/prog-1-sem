#include <stdio.h>
#include <time.h>

int main()
{
    FILE * file = fopen("file.txt","w");
    if (file == NULL)
    {
        printf("Error, cannot create or open file");
        return -1;
    }
    //для определения текущего календарного времени используется функция, которая получить текущую дату, выраженную в секундах
    time_t timer = time(NULL);
    char strDate[40];
    
    char *format = "%d.%m.%Y";

    for (int i = 0; i < 10; i++) {
        //функция преобразует календарное время, указанное timer, сохраняет его в структуре timer и возвращает указатель на нее
        struct tm *dateTime = localtime(&timer);
        strftime(strDate, 40, format, dateTime);
        fprintf(file, "%s\n", strDate);
        timer += 24 * 60 * 60;
    }
    fclose(file);
    return 0;
}
    
    
    /*{
      const time_t timer = time(NULL);
      printf("%s\n", ctime(&timer));
      return 0;
    }*/
