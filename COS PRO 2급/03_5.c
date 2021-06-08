#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int member_age[], int member_age_len, char* transportation) {
	int adult_expense = 0;
	int child_expense = 0;

	if (!strcmp(transportation, "Bus")) {
		adult_expense = 40000;
		child_expense = 15000;
	}
	else if (!strcmp(transportation, "Ship")) {
		adult_expense = 30000;
		child_expense = 13000;
	}
	else if (!strcmp(transportation, "Airplane")) {
		adult_expense = 70000;
		child_expense = 45000;
	}

	if (member_age_len >= 10) {
		adult_expense = adult_expense - adult_expense * 0.1;
		child_expense = child_expense - child_expense * 0.2;
	}
	int total_expenses = 0;
	for (int i = 0; i < member_age_len; i++) {
		if (member_age[i] >= 20)
			total_expenses += adult_expense;
		else
			total_expenses += child_expense;
	}

	return total_expenses;
}