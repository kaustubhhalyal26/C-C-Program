#include<stdio.h>
void display(float s);
float add(int x,int y);
float subtract(int x,int y);
float multiply(int x,int y);
float divide(int x,int y);

int main()
{
    int a,b;
    float ans;
    unsigned char c;
    float (*ptr_op)(int,int);  //
    void (*ptr_disp)(float);    //

    ptr_disp=display;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("Enter the Arithmetic Operation (+,-,*,/):\n");//Selecting the arithmetic operation
    scanf(" %c",&c);

    switch(c)
    {
        case'+':ptr_op=add;
                 break;
        case'-':ptr_op=subtract;
                 break;
        case'*':ptr_op=multiply;
                 break;
        case'/':ptr_op=divide;
                 break;
         default:printf("Invalid Operation\n");
    }
    ans=(*ptr_op)(a,b);
    (*ptr_disp)(ans);
    return 0;

}

void display(float s)//for diaplaying the answer
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
float divide(int x,int y)
{
    if(y!=0)  //if divisor is not equal to zero display the answer
    return (float)x/y
    ;
    else//if divisor is zero then display infinite
    {
    printf("Answer = Infinite\n");
    return 0.0;
    }
}
