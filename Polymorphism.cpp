// Polymorphism.cpp : Defines the entry point for the console application.
//
#include "Header.h"
#include "stdafx.h"
#include <string>
#include "stdlib.h"
#include <iostream>

using namespace std;

void character::setG(int g)
{
	cout << "Enter Gender -- (1)Boy (2)Girl (3)Other/Unsure" << endl;
	cout << "Input: ";
	gender = g;
}
void character::setA(int a)
{
	cout << "Enter Age --" << endl;
	cout << "Input: ";
	age = a;
}
void character::setP(string p)
{
	cout << "Enter Profession --" << endl;
	cout << "Input: ";
	profession = p;
}
void character::setN(string n)
{
	cout << "Enter Name --" << endl;
	cout << "Input: ";
	name = n;
}

int* character::getGPointer()
{
	return &gender;
}
int& character::getGReference()
{
	return gender;
}
int* character::getAPointer()
{
	return &age;
}
int& character::getAReference()
{
	return age;
}
string* character::getPPointer()
{
	return &profession;
}
string& character::getPReference()
{
	return profession;
}
string* character::getNPointer()
{
	return &name;
}
string& character::getNReference()
{
	return name;
}

void gatherInfo::setProfile()
{
	for (int i = 0; i < 12; i++)
	{
		switch (i)
		{
		case 0:
			profile[i] = getGReference();
			break;
		case 1:
			profile[i] = getAReference();
			break;
		case 2:
			profile[i] = getPReference();
			break;
		case 3:
			profile[i] = getNReference();
			break;
		case 4:
			profile[i] = 1;
			break;
		case 5:
			profile[i] = 1;
			break;
		case 6:
			profile[i] = 1;
			break;
		case 7:
			profile[i] = 1;
			break;
		case 8:
			profile[i] = 1;
			break;
		case 9:
			profile[i] = 1;
			break;
		case 10:
			profile[i] = 1;
			break;	
		case 11:
			profile[i] = 1;
			break;
		}
	}
}

void gatherInfo::getProfile()
{
	for (int i = 0; i < 12; i++)
	{
		cout << profile[i] << endl;
	}
}




int main()
{
	gatherInfo gf;
	gf.setProfile();
	gf.getProfile();
	cout << "END" << endl;
	system("pause");
    return 0;
}

