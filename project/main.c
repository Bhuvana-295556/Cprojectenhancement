#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "enter the valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void squareroot();
void cube();
void cuberoot();
void radian();
void degree();
void sine();
void cosine();
void tangent();
void logarithm();
int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Power \n");
    printf("Enter 7 for Factorial \n");
    printf("Enter 8 for square\n");
    printf("Enter 9 for squareroot\n");
    printf("Enter 10 for cube \n");
    printf("Enter 11 for Cuberoot\n");
    printf("Enter 12 for degree to radian\n");
    printf("Enter 13  for radian to degree\n");
    printf("Enter 14  for sine value\n");
    printf("Enter 15  for cosine value\n");
    printf("Enter 16  for tangent value\n");
    printf("Enter 17 for logarithm value\n\n");
    while(1){    
    printf("\n\nEnter the operation you want to do: ");
    
    scanf("%d",&choice);
            
    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    power();
                    break;
                case 7:
                    factorial();
                    break;
                 case 8:
                    square();
                    break;
                case 9:
                    squareroot();
                    break;
                case 10:
                    cube();
                    break;
                case 11:
                    	cuberoot();
                    	break;
                 case 12:
                    	radian();
                    	break;
                 case 13:
                    	degree();
                    	break;   	
                 case 14:
                    	sine();
                    	break;
                 case 15:
                    	cosine();
                    	break;
                  case 16:
                    	tangent();
                    	break;  
                    case 17:
                    	logarithm();
                    	break;
                case 0:
                    exit(0);
                default:
                    printf("\n********** %s ***********\n",note);
        }
    
    }
    return 0;
}

void addition(){
    printf("Enter the numbers you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d\n",a+b);
}
void subtraction(){
    printf("Enter the numbers you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The subtraction of a and b is %d\n",a-b);
}
void multiplication(){
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
}
void division(){
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of a and b is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}
void power(){
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The power is %lf",e);
}
void square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square  of %lf is %lf",b,p);
}
void squareroot(){
    double b;
    printf("Enter the number you want the squareroot of: ");
    scanf("%lf",&b);
    double p=sqrt(b);
    printf("The squareroot of %lf is %lf",b,p);
}
void cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}

void cuberoot(){
    double b;
    printf("Enter the number you want the cube root of : ");
    scanf("%lf",&b);
    double s = cbrt(b);
    printf("The cube root of %lf is %lf",b,s);
}
void radian(){
    float degrees,radians;
   printf("Enter the angle in degrees :");
   scanf("%f",&degrees);
   radians = 0.0174532925*degrees;
   printf("%.2f degrees = %f radians",degrees,radians);
   

}
void degree(){
     float degrees,radians;
   printf("Enter the angle in radians :");
   scanf("%f",&radians);
   degrees = 57.2957795*radians;
   printf("%f radians = %.2f degrees",radians,degrees);
   
}
void sine(){
     double arg;
     double  result;
    printf("Enter the arg value: ");
    scanf("%lf",&arg);
    result = sin(arg);
    printf("sine(%lf) = %lf\n", arg, result);
}
void cosine(){
     double arg;
     double  result;
    printf("Enter the arg value: ");
    scanf("%lf",&arg);
    result = cos(arg);
    printf("cos(%lf) = %lf\n", arg, result);
}
void tangent(){
     double arg;
     double  result;
    printf("Enter the arg value: ");
    scanf("%lf",&arg);
    result = tan(arg);
    printf("tan(%lf) = %lf\n", arg, result);
}
void logarithm(){
     double arg;
     double  result;
    printf("Enter the arg value: ");
    scanf("%lf",&arg);
    result = log(arg);
    printf("log(%lf) = %lf\n", arg, result);
}

