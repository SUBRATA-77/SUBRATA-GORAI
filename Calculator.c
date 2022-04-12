#include<stdio.h>
#include<stdlib.h>
int main()
{
     int x,a,b,res;
     printf("\t\t\tMenu\n");
     printf("\t\t1. Addition\n");
     printf("\t\t2. Subtraction\n");
     printf("\t\t3. Multiplication\n");
     printf("\t\t4. Division\n");
     printf("\t\t5. END\n");
     printf("\tEnter your choice ");
     scanf("%d",&x);
     if(x==5)
          exit(0);
     printf("Enter two numbers ");
     scanf("%d%d",&a,&b);
     switch(x)
     {
               default:
                    printf("Wrong Choice");
                    break;


               case 2:
                    res=a-b;
                    printf("The difference is %d\n",res);
                    break;
               case 3:
                    res=a*b;
                    printf("The product is %d\n",res);
                    break;
               case 1:
                    res=a+b;
                    printf("The sum is %d\n",res);
                    break;

               case 4:
                    if(b!=0)
                    {
                         res=a/b;
                         printf("The quotient is %d\n",res);
                    }
                    else
                         printf("Divisor can't be Zero");
                    break;
          }//END of switch
     return 0;
}
