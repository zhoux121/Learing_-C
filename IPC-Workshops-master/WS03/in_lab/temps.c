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
int main() {
	printf("---=== IPC Temperature Analyzer ===---\n");
	int block_open = 0;
	int enter_1, enter_2;
	for (int i = 1; i <= 3; i++) {
		while (block_open == 0) {
			printf("Enter the high value for day %d: ", i);
			scanf("%d", &enter_1);
			printf("Enter the low value for day %d: ", i);
			scanf("%d", &enter_2);
			if (enter_1 > enter_2 && enter_1 <= 40 && enter_1 >= -40) {
				block_open = 1;
			}
			else {
				printf("Incorrect value, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			}
		}block_open = 0;
	}
}