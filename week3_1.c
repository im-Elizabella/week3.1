#include<stdio.h>
int main()
{
    double w,h,bmi;
    printf("Enter your weight (kg.) : ");
    scanf("%lf",&w);
    printf("Enter your hight(m) : ");
    scanf("%lf",&h);
    bmi = w / (h*h);
    printf("ํYour BMI is : %lf\n",bmi);
 if (bmi < 18.5)
    {
        printf("BMI catecogory is : Underweight");
    }
else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("BMI catecogory is : Normal"); 
    }       
else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("BMI catecogory is : Overweight");    
    }
else if (bmi >=30.0)
    {
        printf("BMI catecogory is : FAT");
    }
   
    return 0;
}