#include<stdio.h>

int main(){
    int subject01, subject02, subject03, subject04, subject05;
    int total_percentage, total_marks;

    printf("******Please enter marks in subjects******\n");
    printf("Marks in Subject01: ");
    scanf("%d",&subject01);
    
    printf("Marks in Subject02: ");
    scanf("%d",&subject02);
    
    printf("Marks in Subject03: ");
    scanf("%d",&subject03);
    
    printf("Marks in Subject04: ");
    scanf("%d",&subject04);
    
    printf("Marks in Subject05: ");
    scanf("%d",&subject05);
    
    total_marks = subject01 + subject02 + subject03 + subject04 + subject05;
    total_percentage = (total_marks)/5;

    printf("******Result of Student**********\n");
    printf("Subject01: %d \nSubject02: %d\nSubject03: %d\nSubject04: %d\nSubject05: %d\n",subject01,subject02,subject03,subject04,subject05);
    printf("------------------------------------------------------------------\n");
    printf("Total marks: %d\tTotal percnatage/Aggregate marks: %d\n",total_marks,total_percentage);
    printf("------------------------------------------------------------------\n");
    //printf("Total percnatage/Aggregate marks: %d\n",total_percentage);
    return 0;

}