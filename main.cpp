// Practice_Problems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<algorithm>
#include "pch.h"
#include <iostream>
#include<iterator>
#include<string>
#include<vector>
/* Problem Number 8
WAP to revers the word.
Example:-
	input : -hello good morning to all
	output : -olleh doog gninrom ot lla
*/
int main()
{
	std::vector<char> storage;
	std::string str = "hello good morning to all";

	for (const auto & x : str)
	{
		if ((x != ' ')) { storage.push_back(x); }
	
		else if ((x == ' '))
		{
			for (std::vector<char>::reverse_iterator rit = storage.rbegin(); rit != storage.rend(); ++rit)
			{
				std::cout << *rit;

			}
			std::cout << " ";
			storage.clear();
		}
	}

	int last_occ = str.rfind(' ');

	for (int i= str.size()-1; i>last_occ; i--) {

		std::cout << str[i];


	}
	return 0;

}

