/*
OVERVIEW:  Given 2 integers (num1, num2), write a function that returns the count of numbers between the num1..num2 that are divisible by num1.
		E.g.: count(3, 15) returns 5 (3, 6, 9, 12, 15).

INPUTS:  Two numbers num1, num2.
		num1, num2 >= 0.

OUTPUT: Return the count of numbers between the num1..num2 that are divisible by num1.

ERROR CASES: Return -1 in error cases.

NOTES:
*/
int count(int num1, int num2) {
	
	if (num1<0 ||num2<0 || num2<num1)
	return -1;
	else
	{
		int flag=1;
		int num=num1+1;
		while (num <= num2)
		{
			if (num%num1 == 0)
				flag++;
			num++;
				
			}

		return flag;
	}
}