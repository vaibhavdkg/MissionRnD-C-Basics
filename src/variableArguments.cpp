#include <stdarg.h>

/*
OVERVIEW: 	A school has unknown number of students. Write a function that takes a variable number of arguments representing student marks in english
and returns the number of students who scored > 90 marks.
E.g.: variableArguments(3, 20, 90, 98) returns 1. One value (98) is greater than 90.

INPUTS: 	First argument is number (arg_count) of student marks followed by "arg_count" number of arguments.
E.g.: If first argument to function is 5, total number of arguments to function will be 6 (1 + 5).

OUTPUT: 	Returns the number of students who scored > 90 marks.

ERROR CASES:

NOTES: 		use stdarg.h header.
*/

int variableArguments(int arg_count, ...)
{
	va_list ap;
	int i = 0, count = 0;
	int length = 1;
	va_start(ap, arg_count);
	for (i = arg_count; length <= arg_count + 1; i = va_arg(ap, int), length++)
		if (i>90)
			count++;
	return count;
	count = 0;
	va_end(ap);
}
