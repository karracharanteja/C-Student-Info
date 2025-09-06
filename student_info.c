#include <stdio.h>
int main(){
    char college[50];
    char branch[50];
    int rollnumber;
    char section;
    float percentage;
    printf("what is the name of your college:\n");
    scanf("%s",college);
    printf("which branch are you studying:\n");
    scanf("%s",branch);
    printf("how much is your roll number:\n");
    scanf("%d",&rollnumber);
    printf("which section you belongs to:\n");
    scanf(" %c",&section);
    printf("what is your average percentage you are maintaining from school to engineering:\n");
    scanf("%f",&percentage);
    printf("college     : %s\n",college);
    printf("branch      : %s\n",branch);
    printf("rollnumber  : %d\n",rollnumber);
    printf("section     : %c\n",section);
    printf("percentage  : %.2f\n",percentage);
    return 0;  }