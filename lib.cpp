#include <cstring>
#include "lib.h"

int funzione(char listanome[10][20],char cerca[1][20], int &pos)
{
    for(int i=0;i<10;i++)
    {
        if(strcmp(listanome[i], cerca[0]  ) == 0){

            pos = i;
            return 1;
        }





    }
    return -1;
}

