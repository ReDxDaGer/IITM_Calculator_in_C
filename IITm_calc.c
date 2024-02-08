#include <stdio.h>

int main(void) {
    char name[50]; // Array to store the name
    float quiz1, quiz2;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s to the IIT Madras unofficial end term marks calculator!!\n", name);
    
    printf("Enter marks for quiz 1: ");
    scanf("%f", &quiz1);
    
    printf("Enter marks for quiz 2: ");
    scanf("%f", &quiz2);

    float weighted_quiz1 = 0.2 * quiz1;
    float weighted_quiz2 = 0.3 * quiz2;
    float total_weighted_marks = weighted_quiz1 + weighted_quiz2;
    
    float minimum_req_marks;
    if (quiz1 > quiz2) {
        minimum_req_marks = (40 - total_weighted_marks) / 4;
    } else {
        minimum_req_marks = 0;
    }

    if (minimum_req_marks > 0) {
        printf("You need at least %.2f in the final exam to pass the course!!\n", minimum_req_marks);
    } else {
        printf("You just need to attend the final exam. You need at least 0 marks to pass the course.\n");
    }

    printf("Wishing you all the best, %s!\nAbki bar dena\n", name);

    return 0;
}
