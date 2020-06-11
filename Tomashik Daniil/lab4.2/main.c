//
//  main.c
//  lab4.2
//
//  Created by Tomashik Daniil on 3/28/20.
//  Copyright © 2020 Tomashik Daniil. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char mas[660],*i=0;
    int col1=0,col2=0;
    char mas1[230],*j=0;
    FILE *fl1,*fl2;
    fl1 = fopen("text.txt", "r");
    fl2=fopen("Change.txt","r");

    while (1)
    {
        j=fgets(mas1,sizeof(mas1),fl2);
   
        //Проверка на конец файла или ошибку чтения
        if (j == NULL )
        {
           // Проверяем, что именно произошло: кончился файл
           // или это ошибка чтения
           if ( feof (fl2) != 0)
           {
              //Если файл закончился, выводим сообщение о завершении
              //чтения и выходим из бесконечного цикла
              printf ("\nЧтение файла закончено\n");
              break;
           }
           else
           {
              //Если при чтении произошла ошибка, выводим сообщение
              //об ошибке и выходим из бесконечного цикла
              printf ("\nОшибка чтения из файла\n");
              break;
           }
        }
        //Если файл не закончился, и не было ошибки чтения
        //выводим считанную строку  на экран
        printf ("   %s",mas1);
        col1++;
     
    }
    
//    while (col1!=3)
//    {
//        j=fgets(mas1,sizeof(mas1),fl2);
//
//        //Проверка на конец файла или ошибку чтения
//        if (j == NULL )
//        {
//            // Проверяем, что именно произошло: кончился файл
//            // или это ошибка чтения
//            if ( feof (fl2) != 0)
//            {
//                //Если файл закончился, выводим сообщение о завершении
//                //чтения и выходим из бесконечного цикла
//                printf ("\nЧтение файла закончено\n");
//                break;
//            }
//            else
//            {
//                //Если при чтении произошла ошибка, выводим сообщение
//                //об ошибке и выходим из бесконечного цикла
//                printf ("\nОшибка чтения из файла\n");
//                break;
//            }
//        }
//        //Если файл не закончился, и не было ошибки чтения
//        //выводим считанную строку  на экран
//
//        printf ("   %s",mas1);
//        col1++;
//
//    }

    
    while (1)
       {
           i=fgets(mas,sizeof(mas),fl1);
           //Проверка на конец файла или ошибку чтения
           if (i == NULL)
           {
              // Проверяем, что именно произошло: кончился файл
              // или это ошибка чтения
              if ( feof (fl1) != 0)
              {
                 //Если файл закончился, выводим сообщение о завершении
                 //чтения и выходим из бесконечного цикла
                 printf ("\nЧтение файла закончено\n");
                 break;
              }
              else
              {
                 //Если при чтении произошла ошибка, выводим сообщение
                 //об ошибке и выходим из бесконечного цикла
                 printf ("\nОшибка чтения из файла\n");
                 break;
              }
           }
           //Если файл не закончился, и не было ошибки чтения
           //выводим считанную строку  на экран
            printf (" %s",mas);
           col2++;
       }
    
    
//    while (1)
//    {
//        i=fgets(mas,sizeof(mas),fl1);
//        //Проверка на конец файла или ошибку чтения
//        if (i == NULL)
//        {
//           // Проверяем, что именно произошло: кончился файл
//           // или это ошибка чтения
//           if ( feof (fl1) != 0)
//           {
//              //Если файл закончился, выводим сообщение о завершении
//              //чтения и выходим из бесконечного цикла
//              printf ("\nЧтение файла закончено\n");
//              break;
//           }
//           else
//           {
//              //Если при чтении произошла ошибка, выводим сообщение
//              //об ошибке и выходим из бесконечного цикла
//              printf ("\nОшибка чтения из файла\n");
//              break;
//           }
//        }
//        //Если файл не закончился, и не было ошибки чтения
//        //выводим считанную строку  на экран
//
//        printf (" %s",mas);
//    }
    printf("\n  col1=  %d\n",col1);
    printf("\n  col2=  %d\n",col2);
    fclose(fl2);
    fclose(fl1);
    return 0;
}
                      
                      
