#include "abstractSeq.h"


void AbstractSeq::printSeq(int k, int m)
{
	while (k <= m)
	{
		cout << fun(k) << " ";
		k++;
	}
}

int AbstractSeq::sumSeq(int k, int m)
{
	int sum = 0;

	while (k <= m)
	{
		sum = sum + fun(k);
		k++;
	}
	return sum;
}
