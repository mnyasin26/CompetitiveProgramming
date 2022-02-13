#include <stdio.h>

int main() {
    int n,m;
    int i,j;
    int x;
    int max, max2 = 0;
    int index_now[2];
    int hasil;
    int back[2];

    int p,q;
    int a = 100 , b= 100 , c=100, d=100;
    

    scanf("%d", &n);
    scanf("%d", &m);

    int arr[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == 0 && j == 0)
            {
                max = arr[0][0];
            }

            if (max < arr[i][j])
            {
                max = arr[i][j];
                index_now[0] = i;
                index_now[1] = j;
            }
            
        }
        
    }

    

    scanf("%d", &x);
    
    
    hasil = max;

    for (i = 0; i < x-1; i++)
    {
        max2 = 0;
        p = 0;
        q = 0;
        
        
        
        

        for (j = 0; j < 4; j++)
        {
            
            switch (j)
            {
                case 0:
                
                if (index_now[1] == 0)
                {
                    
                }
                else
                {
                    if (max2 == 0 && back[1] != index_now[1]-1)
                    {
                        
                        max2 = arr[index_now[0]][index_now[1]-1];
                        p = index_now[0];
                        q = index_now[1]-1;
                        
                        
                    }
                    else 
                    {
                        if (max2 < arr[index_now[0]][index_now[1]-1] && back[1] != index_now[1]-1)
                        {
                            max2 = arr[index_now[0]][index_now[1]-1];
                            p = index_now[0];
                            q = index_now[1]-1;
                            

                            
                            
                            
                        }
                        
                    }
                }

                break;

                case 1:
                if (index_now[0] == n-1)
                {
                    
                }
                else
                {
                    if (max2 == 0 && back[0] != index_now[0]+1)
                    {
                        max2 = arr[index_now[0]+1][index_now[1]];
                        p = index_now[0]+1;
                        q = index_now[1];
                        
                    }
                    else 
                    {
                        if (max2 < arr[index_now[0]+1][index_now[1]] && back[0] != index_now[0]+1)
                        {
                            max2 = arr[index_now[0]+1][index_now[1]];
                            p = index_now[0]+1;
                            q = index_now[1];
                            
                        }
                        
                    }
                    
                    
                }
                
                break;

                case 2:
                if (index_now[1] == m-1)
                {
                    /* code */
                }
                else
                {
                    if (max2 == 0 && back[1] != index_now[1]+1)
                    {
                        max2 = arr[index_now[0]][index_now[1]+1];
                        p = index_now[0];
                        q = index_now[1]+1;
                        
                        
                    }
                    else 
                    {
                        if (max2 < arr[index_now[0]][index_now[1]+1] && back[1] != index_now[1]+1)
                        {
                            max2 = arr[index_now[0]][index_now[1]+1];
                            p = index_now[0];
                            q = index_now[1]+1;
                            
                        }
                                                
                    }
                }
                    
                
                break;

                case 3:
                if (index_now[0] == 0)
                {
                    /* code */
                }
                else
                {
                    if (max2 == 0 && back[0] != index_now[0]-1)
                    {
                        max2 = arr[index_now[0]-1][index_now[1]];
                        p = index_now[0]-1; 
                        q = index_now[1];
                        
                    }
                    else 
                    {
                        if (max2 < arr[index_now[0]-1][index_now[1]] && back[0] != index_now[0]-1)
                        {
                            max2 = arr[index_now[0]-1][index_now[1]];
                            p = index_now[0]-1;
                            q = index_now[1];
                            
                        }
                           
                        
                    }
                }
                break;
            
                default:
                break;

            }
            
            
            
        }
        
        back[0] = index_now[0];
        back[1] = index_now[1];
        index_now[0] = p;
        index_now[1] = q;
        

        hasil += max2;
    }
    
    printf("%d\n", hasil);
    
}