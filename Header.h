#pragma once
#include <string>


#ifndef HEADER_H
#define HEADER_H

class character
{
private:
	//1 = boy, 2 = girl, 3 = other/unsure
	
	int gender;
	int age;
	std::string profession;
	std::string name;


public:
	void setG(int);
	void setA(int);
	void setP(std::string);
	void setN(std::string);

	int* getGPointer();
	int& getGReference();
	int* getAPointer();
	int& getAReference();
	std::string* getPPointer();
	std::string& getPReference();
	std::string* getNPointer();
	std::string& getNReference();
};

class contact
{
private:
	int cellNum;
	std::string email;
	std::string address;

	
public:
	void setCN(int);
	void setEM(std::string);
	void setAD(std::string);
};

class likes
{
private:
	std::string hobby1;
	std::string hobby2;
	std::string freqResturant;
	std::string cellBrand;
	std::string shoeBrand;


public:
	void setH1(std::string);
	void setH2(std::string);
	void setFR(std::string);
	void setCB(std::string);
	void setSB(std::string);
};

class gatherInfo : public character
{
public:
	std::string profile[12];
	

	void setProfile();
	void getProfile();
};
#endif




