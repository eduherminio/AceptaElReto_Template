#include <iostream>
#include <string>   // string(str, i, length), stoi(str), to_string(num), getline(cin, str)
#include <cstring>  // strcpy, etc.
#include <cmath>    // abs, ceil, floor, (ll)round, trunc, nearbyint, copysign(n, +-1,fmax, fmin)
#include <cctype>   // isupper, islower, toupper, tolower
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <algorithm> // (see below) find, min, max, reverse, rotate...
#include <vector>
#include <list>

#define ARRAY_SIZE(a)           (sizeof((a))/sizeof((a[0])))
#define GETLINE(str)            getline(std::cin, str);

int main()
{
	while (true)
	{
		int n1, n2;

		std::cin >> n1;
		std::cin >> n2;

		if (n1 == 0 && n2 == 0)
		{
			break;
		}

		std::cout << (n1 >= n2 ? "CUERDO" : "SENIL") << std::endl;
	}
}
