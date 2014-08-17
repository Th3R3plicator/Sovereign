// Sovereign.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char res[100];
	std::string input;

	cout << "Welcome\n";
	cin >> res;
	input = res;

	if (input.compare("Hello") == 0) {
		cout << "\nNice To Meet You\n";
	}

	cin >> res;

	return 0;
}

