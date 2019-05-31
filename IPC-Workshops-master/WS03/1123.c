//----------------------------------------------
// Name:           xiaoxin zhou
// Student Number: 111310199
// Email:          xzhou127@myseneca.ca
// Section:        IPC144SII.04992.2194
// Workshop:       2 (in-lab)
//----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include<stdio.h>
int main(){
	printf("---=== IPC Temperature Analyzer ===---\n");
	int block_open = 0;
	int enter_1, enter_2, highest = -40, lowest = 40, highest_day, lowest_day;
	float average_low = 0, average_high = 0;

	for(int i = 1; i<=4; i++){
        	while(block_open == 0){
                printf("Enter the high value for day %d: ", i);
                scanf("%d", &enter_1);
                printf("\n");
                if(enter_1 > highest){
                    highest = enter_1;
                    highest_day = i;
                }
                printf("Enter the low value for day %d: ", i);
                scanf("%d", &enter_2);
                printf("\n");
                if(enter_2 < lowest){
                    lowest = enter_2;
                    lowest_day = i;
                }
                if(enter_1 > enter_2 && enter_1 <= 40 && enter_1 >=-40){
                    block_open = 1;
                    average_low = average_low + enter_2;
                    average_high = average_high + enter_1;
                }
                else{
                    printf("Incorrect value, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
                }
        	}block_open = 0;
	}
	printf("The average (mean) LOW temperature was: %.2f\n",average_low/4.0);
	printf("The average (mean) HIGH temperature was: %.2f\n",average_high/4.0);
	printf("The average (mean) temperature was: %.2f\n",(average_low/4.0 + average_high/4.0)/2.0);
	printf("The highest temperature was %d, in day %d\n",highest,highest_day);
	printf("The lowest temperature was %d, on day %d\n", lowest, lowest_day);
}
