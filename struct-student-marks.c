#include <stdio.h>

struct stu {
    char name[50];
    int roll;
    int mark[3];
    int total;
};

int main() {
    int n,i,j;
    printf("Enter number of Students: ");
    scanf("%d", &n);
    
    struct stu s[n];
    for (i= 0; i < n; i++)
    {
        printf("Enter Student Name: ");
        scanf("%s", s[i].name);
        printf("Enter Student Roll Number: ");
        scanf("%d", &s[i].roll);
        s[i].total=0;
        for (j=0; j<3; j++){
            printf("Enter Student Marks: ");
            scanf("%d", &s[i].mark[j]);
            s[i].total += s[i].mark[j];
        }
    }
    for (i=0; i<n; i++){
        printf("Student %d\n", i+1);
        printf("Name %s\n",s[i].name);
        printf("Roll Number %d\n", s[i].roll);
        printf("Marks: %d, %d, %d\n", s[i].mark[0],s[i].mark[1],s[i].mark[2]);
        printf("Total Marks: %d\n", s[i].total);
    }
return 0;

}
