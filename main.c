#include <stdio.h>
#include <ctype.h>
/*program for reading in students and scores and showing student with highest average and students with scores below average*/
int main(){
    char names[5][11]; 
    int scores[5][13]; 
    float student_average[5];

    // read name and scores for each student and calculate average
        for (int i=0; i<5; i++){
    //    printf("enter name and 13 scores for student %d:\n", i +1);
        scanf("%10s", names[i]);         
        int sum = 0;
        for (int s=0; s<13; s++) { 
        scanf("%d", &scores [i][s]);
        sum += scores [i][s];            
        }
        student_average[i] = sum / 13.0;
        }

            // find student with highest average
            float max_average = student_average [0];
            int max_index = 0;
            for (int i=1; i<5; i++){
            if (student_average[i] > max_average){
            max_average = student_average[i];
            max_index = i;
            }
            }

                // count average for the group
                //  printf("student with highest average is: %s\n", names[max_index]);
                float total_average = 0;
                for (int i = 0; i < 5; i++) {
                total_average += student_average[i];
                }
                total_average /= 5.0;
                            

                         // Print student with highest average with uppercase first letter
                        printf("%c%s\n", toupper(names[max_index][0]), &names[max_index][1]);

                            // Print students below average score with uppercase first letter
                            for (int i = 0; i < 5; i++) {
                            if (student_average[i] < total_average) {
                            printf("%c%s\n", toupper(names[i][0]), &names[i][1]);
                            }
                            }


                                // //Control print
                                // for (int i = 0; i < 5; i++) { 
                                //     printf("Student %d: %s - ", i + 1, names[i]);
                                //     for (int s = 0; s < 13; s++) {
                                //         printf("%d ", scores[i][s]);                                            
                                //     }
                                //     printf("average is %.2f\n", average[i]);
                                // }
    return 0;
}
