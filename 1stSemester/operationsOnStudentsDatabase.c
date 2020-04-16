#include <stdio.h>
// #include <string.h>

struct StudentInfo{
        int roll_number;
        char name[20];
        int marks[10];
        char grade[30];
};

struct StudentInfo students_list[10];

int i, j;

int add_new_student ();
int finder(char student_name[20]);
int print_info();

int main() {

    char command;
    char student_name[20];

    printf("Please send the letter in order to run some function: \n'a' - to add a new student(max 10 students),\n'f' - to find the student by its name\ncommand >" );
    scanf("%c", &command);

    while (command != 'q') {
        if (command == 'a') {
            add_new_student();
        } else if (command == 'f') {
            printf("Please enter the student's name in order to findthe information about him: \n>");
            scanf("%s", &student_name);
            finder(student_name);
        };

        printf("\nPlease send the letter in order to run some function: \n'a' - to add a new student(max 10 students),\n 'f' - to find the student by its name\ncommand >" );
        scanf("%c", &command);
    };
    return 0;
}

int add_new_student() {
    for (i = 0; i < 10; i++) {
        printf("\nEnter the %dth student's info", i+1);

        printf("\nRoll number: ");
        scanf("%d", &students_list[i].roll_number);

        printf("\nName: ");
        scanf("%s", &students_list[i].name);

        printf("\nMarks(10 marks must be there): ");

        for (int m = 0; m < 10; m++) {
            scanf("%d", &students_list[i].marks[m]);
        }

        printf("\nGrade: ");
        scanf("%s", &students_list[i].grade);
        break;
    }

    print_info();

    return 0;
}

int print_info(){
    int student_number;
    printf("Enter the number of student: ");
    scanf("%d", &student_number);
    printf("\nRoll number: %d", students_list[student_number].roll_number);
    printf("\nName: %s", students_list[student_number].name);
    printf("\nGrade: %s",students_list[student_number].grade);
    
    return 0;
}

int finder(char student_name[20]) {
    for (j = 0; j < 10; j++) {
        if (student_name == students_list[j].name) {
            printf("Student's info: \nRoll number: %d\nName: %s\n Marks: ", students_list[j].roll_number, students_list[j].name);
            for (int k = 0; k < 10; k++) {
                printf("%d\n", students_list[j].marks[k]);
            }
            printf("\nGrade: %s\n", students_list[j].grade);
        } else {

            printf("-");

        }
    }

    return 0;
}
