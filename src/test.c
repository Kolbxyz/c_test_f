// Libraries:
#include <stdio.h>

// Functions:
int main() {
	// Variables:
	static int range;
	static int count = 1;
	static int even_count = 0;
	static int max;
	static int display_options;

	static char input[12]; // Max range
	static char input2[1]; // Multiple to be compared
	static char input3[5]; // Display options
	static char string_option[1];

	printf("\nRange: ");
	scanf("%s", input);

	printf("\nMultiple: ");
	scanf("%s", input3);
	range = atoi(input3);

	printf("\nDISPLAY OPTIONS\n0: All\n1: Even\n2: Nothing\n>  ", input3);
	scanf("%s", input2);
	
	max = atoi(input);
	display_options = atoi(input2);

	if (display_options == 0) {
		strcpy(string_option, "All");
	}
	else if (display_options == 1) {
		strcpy(string_option, "Even");
	}
	else {
		strcpy(string_option, "Nothing");
	}

	printf("\nStarting with the following parameters:\nRange: %i\nMultiple: %i\nDisplay: %s\n\n", max, range, string_option);

	while (count <= max) {
//		printf("%i\n", count%range);
		if (count % range == 0) {
			if (display_options < 2) {
				printf("\n%i : ✅\n", count);
			}
			even_count ++;
		}
		else {
			if (display_options == 0) {
				printf("\n%i : ❌\n", count);
			}
		}
		
		count ++;
	}
//	printf("%i", max);
	printf("\n%i are multiple of %i (%.2f%%)\n%i are not (%.2f%%).\n\n", even_count, range, (float) even_count / (float) count * 100, count-even_count, 100 - (float) even_count / (float) count * 100);
	return 0;
}
