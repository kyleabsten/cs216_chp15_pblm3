#include <iostream>
#include "abstractSeq.h"
#include "oddSequence.h"
#include "evenSequence.h"

using namespace std;

int main()
{
	int testStart = 2, testEnd = 6;

	OddSequence *odds;
	EvenSequence *evens;

	evens = new EvenSequence();
	odds = new OddSequence();
	cout << "The evens sequence from " << testStart * 2 << " to " << testEnd * 2 << " is: " << endl;
	evens->printSeq(testStart, testEnd);
	cout << endl << "And the sum of those numbers is: " << evens->sumSeq(testStart, testEnd) << endl;
	cout << "The evens sequence from " << (testStart * 2) + 1 << " to " << (testEnd * 2) + 1 << " is: " << endl;
	odds->printSeq(testStart, testEnd);
	cout << endl << "And the sum of those numbers is: " << odds->sumSeq(testStart, testEnd) << endl;



	return 0;
}