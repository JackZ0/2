#include <QCoreApplication>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char str[1000];
    int count = 0;
    gets(str);
    int lenth = strlen(str);
    for (int i = (lenth-1); i > 0; i--)
    {
        if(str[i] != ' ')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d \n",count);
    system("pause");
    return a.exec();
}
