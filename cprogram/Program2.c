/*
 * Program2.c
 *
 *  Created on: Feb 10, 2023
 *      Author: k801a197
 */


#include <stdio.h>
#include <math.h>


int count(int remaining_score, int score_values[], int checked_values[])
{
	if (((remaining_score - 8) >= 0) & (checked_values[0] == 0)) {
            if (count(remaining_score - 8, score_values, checked_values) == 0) {
                for (int i = 0; i < 5; i++) {
                    checked_values[i]--;
                }
            }
            score_values[0]--;
	}

    checked_values[0]++;

	if (((remaining_score - 7) >= 0) & (checked_values[1] == 0)) {
	        if (count(remaining_score - 7, score_values, checked_values) == 0) {
                for (int i = 0; i < 5; i++) {
                    checked_values[i]--;
                }
            }
            score_values[0]--;
    }

    checked_values[1]++;

	if (((remaining_score - 6) >= 0) & (checked_values[2] == 0)) {
	        if (count(remaining_score - 6, score_values, checked_values) == 0) {
                for (int i = 0; i < 5; i++) {
                    checked_values[i]--;
                }
            }
        score_values[0]--;
    }

    checked_values[1]++;

	if (((remaining_score - 3) >= 0) & (checked_values[3] == 0)) {
	        if (count(remaining_score - 3, score_values, checked_values) == 0) {
                for (int i = 0; i < 5; i++) {
                    checked_values[i]--;
                }
            }
        score_values[0]--;
    }

    checked_values[1]++;

	if (((remaining_score - 2) >= 0) & (checked_values[4] == 0)) {
	     	if (count(remaining_score - 2, score_values, checked_values) == 0) {
                for (int i = 0; i < 5; i++) {
                    checked_values[i]--;
                }
            }
        score_values[0]--;
    }

    checked_values[1]++;

	if (remaining_score == 0) {
    	printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", score_values[0], score_values[1], score_values[2], score_values[3], score_values[4]);
        return 1;
	}
    return 0;

}



int main() {
	/*int terminate = 0;
	int score;
	int score_values[5];
    int checked_values[5];
	while (!terminate){
		printf("Enter Score (or integer <= 1 to exit):\n");
		scanf("%d", &score);
		if (score <= 1){
			printf("Terminating program...");
			terminate = 1;
			break;
		}
		count(score, score_values, checked_values);
	}
	return 0;*/

    int score; // integer that will store the score value from the user
    printf("Enter Score (or integer <= 1 to exit): \n"); // asks the user for the score value
    fflush(stdout); // adds a buffer so that the print statement prints before the buffer
    scanf("%d", &score); // scans the score given from the user

    while (score > 1) { // loops until an invalid score is entered
        int default_scores[5] = {0, 0, 0, 0, 0}; // integer array that will store how many of each scoring type for each combination
        int checked_scores[5] = {0, 0, 0, 0, 0}; // integer array that will act as a check to make sure all of one score type has been found before moving to the next
        printf("\nScoring combinations for %d points\n", score);
        count(score, default_scores, checked_scores); // runs the scoreCount function that will find all combination of the given score and print them.

        printf("\nEnter a point value: "); // asks the user for the score value
        fflush(stdout); // adds a buffer so that the print statement prints before the buffer
        scanf("%d", &score); // scans the score given from the user
    }

    printf("\nExiting..."); // prints an exit message

    return 0;
}
