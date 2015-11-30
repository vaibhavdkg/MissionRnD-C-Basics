/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int validate(int day, int month, int year)
{
	if ((year > 0) && (month > 0 && month <= 12))
	{
		if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
		{
			if (day > 0 && day <= 30)
				return 1;
			else
				return 0;
		}
		else if (month == 2)
		{
			if (year % 4 == 0)
			{
				if (year % 100 == 0)
				{
					if (year % 400 == 0)
					{
						if (day > 0 && day <= 29)
							return 1;
						else
							return 0;
					}
				}
				if (day > 0 && day <= 29)
					return 1;
				else
					return 0;
			}
			else
			{
				if (day > 0 && day <= 28)
					return 1;
				else
					return 0;
			}
		}
		else
		{
			if (day > 0 && day <= 31)
				return 1;
			else
				return 0;
		}
	}
	else
		return 0;

}
int isOlder(char *dob1, char *dob2) {
	if (dob1[2] == '-' && dob1[5] == '-' && dob2[2] == '-' && dob2[5] == '-')
	{
		int year1 = (dob1[9] - '0') + (dob1[8] - '0') * 10 + (dob1[7] - '0') * 100 + (dob1[6] - '0') * 1000;
		int year2 = (dob2[9] - '0') + (dob2[8] - '0') * 10 + (dob2[7] - '0') * 100 + (dob2[6] - '0') * 1000;
		int month1 = (dob1[4] - '0') + (dob1[3] - '0') * 10;
		int month2 = (dob2[4] - '0') + (dob2[3] - '0') * 10;
		int day1 = (dob1[1] - '0') + (dob1[0] - '0') * 10;
		int day2 = (dob2[1] - '0') + (dob2[0] - '0') * 10;
		int dob1check = validate(day1, month1, year1);
		int dob2check = validate(day2, month2, year2);
        if (dob1check == 0 || dob2check == 0)
			return -1;
		else
		{
			if (year1 > year2)
				return 2;
			else if (year2 > year1)
				return 1;
			else
			{

				if (month1 > month2)
					return 2;
				else if (month2 > month1)
					return 1;
				else
				{

					if (day1 > day2)
						return 2;
					else if (day2 > day1)
						return 1;
					else
						return 0;
				}
			}
		}
	}
	else
		return -1;
}
