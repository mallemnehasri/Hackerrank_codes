#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int *marks,int num,char gender){
    int sum=0;
    int z;
    if (gender == 'b'){
        for (int i=0;i<=(num/2);i++){
            sum+=*(marks+(i+i));
        }
        z=sum;
        
    }
    else if (gender == 'g'){
        for (int i=1;i<=(num/2);i++){
            int y=(2*i)-1;
            sum+=*(marks+y);
        }
        z=sum;
    }
    return z;
}
int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
