#include <stdio.h>
float average(float , float , float , float);
float final_grade(float , float , float , float );


const int weightofAssignment = 20;
const int weightofLab = 15;
const int weightofCie = 25;
const int weightofSee = 40;
int main()
{
    float math,pop,physics,electronics,final_weighted_result;
    char name[20];
    float avg_assignment,avg_lab,avg_cie,avg_see;
    

    printf("Enter Your Name: ");
    scanf("%s",name);

    printf(" ---------------FOR ASSIGNMENTS----------------");

    printf("\nEnter Your marks in Maths : ");
    scanf("%f",&math);
    printf("\nEnter Your marks in POP : ");
    scanf("%f",&pop);
    printf("\nEnter Your marks in Physics : ");
    scanf("%f",&physics);
    printf("\nEnter Your marks in Electronics : ");
    scanf("%f",&electronics);

    avg_assignment = average(math , pop , physics , electronics);
    printf("\nYour Average marks for assignments are = %02f" , avg_assignment);

    



     printf("\n--------------FOR LABS----------------");

    printf("\nEnter Your marks in Maths : ");
    scanf("%f",&math);
    printf("\nEnter Your marks in POP : ");
    scanf("%f",&pop);
    printf("\nEnter Your marks in Physics : ");
    scanf("%f",&physics);
    printf("\nEnter Your marks in Electronics : ");
    scanf("%f",&electronics);

    avg_lab = average(math , pop , physics , electronics);
    printf("\nYour Average marks for Labs are = %0.2f" , avg_lab);



     printf("\n---------------FOR CIE----------------");

    printf("\nEnter Your marks in Maths : ");
    scanf("%f",&math);
    printf("\nEnter Your marks in POP : ");
    scanf("%f",&pop);
    printf("\nEnter Your marks in Physics : ");
    scanf("%f",&physics);
    printf("\nEnter Your marks in Electronics : ");
    scanf("%f",&electronics);

    avg_cie = average(math , pop , physics , electronics);
    printf("\nYour Average marks for CIE are = %0.2f" , avg_cie);

     printf("\n---------------FOR SEE----------------");

    printf("\nEnter Your marks in Maths : ");
    scanf("%f",&math);
    printf("\nEnter Your marks in POP : ");
    scanf("%f",&pop);
    printf("\nEnter Your marks in Physics : ");
    scanf("%f",&physics);
    printf("\nEnter Your marks in Electronics : ");
    scanf("%f",&electronics);

    avg_see = average(math , pop , physics , electronics);
    printf("\nYour Average marks for SEE are = %0.2f" , avg_see);


    final_weighted_result = final_grade(avg_assignment , avg_lab , avg_cie , avg_see);

    printf("\nFinal Weighted Result of %s = %0.2f " , name , final_weighted_result);

     

    

    

    return 0;

}

float average(float a , float b , float c , float d){
    float averageResult;
    averageResult = (a + b + c + d)/4;
    return averageResult;
}

float final_grade(float r , float u , float v , float s){
    float finalResult;
    finalResult = ((r*(weightofAssignment/100.0)) + (u*(weightofLab/100.0)) + (v*(weightofCie/100.0)) + (s*(weightofSee/100.0)));
    return finalResult;
}