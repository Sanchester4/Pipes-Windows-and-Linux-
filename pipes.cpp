#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<math.h>
using namespace std;
int main(int argc, char *argv[])
{
    int fd[11];
    int val = 0;

    // create pipe descriptors
    pipe(fd);

    // fork() returns 0 for child process, child-pid for parent process.
    if (fork() != 0)
    {
        // parent: writing only, so close read-descriptor.
        close(fd[0]);

        // send the value on the write-descriptor.
         
    printf("\nsend values from Proces 1: \n");
   for(int j = 2; j <=1000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[1], &val, sizeof(val));
           printf(" %d", val);
        }

        
    
         
        
}
        // close the write descriptor
        close(fd[1]);
        
        printf("\nsend values from Proces 2: \n");
   for(int j = 1001; j <=2000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[2], &val, sizeof(val));
           printf(" %d", val);
        }

        
    close(fd[2]);
         
        
}

printf("\nsend values from Proces 3: \n");
   for(int j = 2001; j <=3000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[3], &val, sizeof(val));
           printf(" %d", val);
        }

        
    close(fd[3]);
         
        
}

printf("\nsend values from Proces 4: \n");
   for(int j = 3001; j <=4000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[4], &val, sizeof(val));
           printf(" %d", val);
        }

        
    close(fd[4]);
         
        
}

printf("\nsend values from Proces 5: \n");
   for(int j = 4001; j <=5000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[5], &val, sizeof(val));
           printf(" %d", val);
        }

        
    close(fd[5]);
         
        
}

printf("\nsend values from Proces 6: \n");
   for(int j = 5001; j <=6000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[6], &val, sizeof(val));
           printf(" %d", val);
        }

        
    close(fd[6]);
         
        
}
printf("\nsend values from Proces 7: \n");
   for(int j = 6001; j <=7000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[7], &val, sizeof(val));
           printf(" %d", val);
        }

        
    close(fd[7]);
         
        
}

printf("\nsend values from Proces 8: \n");
   for(int j = 7001; j <=8000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[8], &val, sizeof(val));
           printf(" %d", val);
        }

        
    close(fd[8]);
         
        
}
printf("\nsend values from Proces 9: \n");
   for(int j = 8001; j <=9000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[9], &val, sizeof(val));
           printf(" %d", val);
        }

        
    close(fd[9]);
         
        
}
printf("\nsend values from Proces 10: \n");
   for(int j = 9001; j <=10000; j++)
    {
        int flag = 0;

        for(int i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            {val =j ;
            write(fd[10], &val, sizeof(val));
           printf(" %d", val);
        }

        
    close(fd[10]);
         
        
}




    }
    
    return 0;
}
