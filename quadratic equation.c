#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    float root1;
    float root2;
    float det;
    float sqrt_det;
    float real_root;
    float img_root;


    printf("ENTER VALUE FOR a:");
    scanf("%f",&a);

    printf("ENTER VALUE FOR b:");
    scanf("%f",&b);

    printf("ENTER VALUE FOR c:");
    scanf("%f",&c);
    
    det=(b*b)-(4*a*c);
    sqrt_det=sqrt(det);

    if (sqrt_det>0)
    {
      root1=((-b)+sqrt_det)/(2*a);
      root2=((-b)-sqrt_det)/(2*a);
    
      printf("\nThe first root of the quadratic equation is: %.2f",root1);
      printf("\nThe second root of the quadratic equation is: %.2f",root2);
    }

    else if(sqrt_det==0)
    {
        root1=(-b)/(2*a);
        root2=(-b)/(2*a);
        printf("\nThe first root of the quadratic equation is: %.2f",root1);
        printf("\nThe second root of the quadratic equation is: %.2f",root2);
    }

    else
    {
        real_root=(-b/(2*a));
        img_root=(sqrt_det/(2*a));

         printf("\nCOMPLEX ROOTS");
    
    }
           
    return 0;

}
