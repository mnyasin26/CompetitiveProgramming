#include <stdio.h>

void main()
{
    int t;
    int n, a, b;
    int i, j, k, l;
    int temp;
    int hasil[100];

    scanf("%i", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%i %i %i", &n, &a, &b);

        int x[n];
        for (j = 0; j < n; j++)
        {
            scanf("%i", &x[j]);
        }

        for (j = 0; j < b; j++)
        {
            for (k = 0; k < a; k++)
            {

                temp = x[n - 1];
                for (l = n - 1; l > 0; l--)
                {
                    x[l] = x[l - 1];
                }
                x[0] = temp;
                hasil[i] = x[i]; 
                
            }
             
        }
    }

    for(i = 0; i < t; i++){
        if(i == t-1){
            printf("%i\n", hasil[i]);
        }else {
            printf("%i\n\n", hasil[i]);
        }
    }
}