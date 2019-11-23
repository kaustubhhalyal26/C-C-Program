#include<stdio.h>

void display(float s)//Function to display answer
{
    printf("Answer is %0.3f\n",s);
}
float add(int x,int y)
{
    return(x+y);//returns sum of 2 numbers
}
float subtract(int x,int y)
{
    return(x-y);//subtracts y from x
}
float multiply(int x,int y)
{
    return(x*y);//multiples x and y
}
float divide(int x,int y)//divides y from x
{
    if(y!=0)
    return (float)x/y;
    else//if divisor is 0 then display infinite
    {
    printf("Answer = Infinite\n");
    return 0.0;
    }
}

int main()
{
    int a,b;
    float ans;
    unsigned char c;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("Enter the Arithmetic Operation (+,-,*,/):\n");
    scanf(" %c",&c);                                        //Enter the operation

    switch(c)
    {
        case'+':ans=add(a,b);
                 break;
        case'-':ans=subtract(a,b);
                 break;
        case'*':ans=multiply(a,b);
                 break;
        case'/':ans=divide(a,b);
                 break;
         default:printf("Invalid Operation\n");
    }
    display(ans);//calling display function and passing ans argument
    return 0;
}
