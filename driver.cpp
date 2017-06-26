// Name: Ali Bayati 
// Overloaded Operators 


// File: Driver.cpp
// Note: Used to test our date class with overloaded functions

#include <iostream>
#include "d_date.h"

using namespace std;

//** My code FROM  / Ali **********************************************************************


bool operator!=(const date&, const date&);
bool operator==(const date&, const date&);

//** My code TO  / Ali **********************************************************************


void main (void)
{
	date date1;
	date date2;

	cout << "Enter date1 and date2:" << endl;

	while (cin >> date1 >> date2)
	{
		cout << "Printing date1 and date2" << endl;
		cout << date1 << endl << date2 << endl;

		if (date1 == date2) 
			cout << date1 << " is equal to " << date2 << endl;

		if (date1 != date2) 
			cout << date1 << " is not equal to " << date2 << endl;

		if (date1 < date2) 
			cout << date1 << " is less than " << date2 << endl;

		if (date1 > date2) 
			cout << date1 << " is greater than " << date2 << endl;

		++date1;
		++date2;

		cout << "Increment of date1: " << date1 << endl;
		cout << "Increment of date2: " << date2 << endl;

		cout << endl << "---End of Run---" << endl << endl;

		cout << "Enter date1 and date2:" << endl;
	}

}

//** My code FROM  / Ali **********************************************************************

bool operator!=(const date& frst, const date& scnd)
{
	return !(frst.getDay() == scnd.getDay() && frst.getMonth() == scnd.getMonth() && frst.getYear() == scnd.getYear());
}

bool operator==(const date& frst, const date& scnd)
{
	return (frst.getDay() == scnd.getDay() && frst.getMonth() == scnd.getMonth() && frst.getYear() == scnd.getYear());
}

//** My code TO / Ali **********************************************************************

/*Output
Enter date1 and date2:
5/5/1977 10/24/1973
Printing date1 and date2
1977/5/5

1973/10/24

1977/5/5
is not equal to 1973/10/24

1977/5/5
is greater than 1973/10/24

Increment of date1: 1977/5/6

Increment of date2: 1973/10/25


---End of Run---

Enter date1 and date2:
2/25/1944 9/30/1982
Printing date1 and date2
1944/2/25

1982/9/30

1944/2/25
is not equal to 1982/9/30

1944/2/25
is less than 1982/9/30

Increment of date1: 1944/2/26

Increment of date2: 1982/10/1


---End of Run---

Enter date1 and date2:
3/5/1999 3/7/1999
Printing date1 and date2
1999/3/5

1999/3/7

1999/3/5
is not equal to 1999/3/7

1999/3/5
is less than 1999/3/7

Increment of date1: 1999/3/6

Increment of date2: 1999/3/8


---End of Run---

Enter date1 and date2:
3/5/1999 3/5/1999
Printing date1 and date2
1999/3/5

1999/3/5

1999/3/5
is equal to 1999/3/5

Increment of date1: 1999/3/6

Increment of date2: 1999/3/6


---End of Run---

Enter date1 and date2:
*/