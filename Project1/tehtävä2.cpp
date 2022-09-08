#include <iostream>

template <typename T>

T EtsiP(T taulukko[], int p)
{
	T pienin = taulukko[0];

		for (int i = 1; i < p; i++)
		{
			if (taulukko[i] < pienin)
			{
				pienin = taulukko[i];
			}
		}

		return pienin;
};
int main()
{
};

