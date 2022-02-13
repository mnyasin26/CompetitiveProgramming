#include <stdio.h>
#include <math.h>

/*
typedef struct 
{
    int koor[3];
}kubus;
*/

int main(){

    int i, j;
    double temp;
    int max = 0;
    int x, y;

    double koor[8][3];

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%lf", &koor[i][j]);
        }
        
    }
   
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            temp = sqrt(pow((koor[i][0]-koor[j][0]),2)+pow((koor[i][1]-koor[j][1]),2)+pow((koor[i][2]-koor[j][2]),2));
            
            if (temp > max)
            {
                max = temp;
            }
        }
        
    }

    printf("%d\n", max);

}

