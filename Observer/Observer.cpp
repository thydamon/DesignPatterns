/*************************************************************************
    > File Name: Observer.cpp
    > Author: Damon
    > Mail: thydamon@gmail.com 
    > Created Time: Mon 04 Dec 2017 07:21:45 PM EST
 ************************************************************************/

#include <iostream>
using namespace std;

#include "Observer.h"

UniversityStudent::UniversityStudent()
{
	if (NULL != subject)
	{
		this->subject = subject;
	}
	else
	{
		return;
	}

	subject->addObserver(this);
}

void UniversityStudent::hearTelephone(string meg)
{
	cout << "I am UniversityStudent." << endl;
	cout << "get msg " << meg << endl;

	return;
}

OverseasStudent::OverseasStudent()
{
	if (NULL != subject)
	{
		this->subject = subject;
	}
	else
	{
		return;
	}

	subject->addObserver(this);
}

void OverseasStudent::hearTelephone(string meg)
{
	cout << "I am OverseasStudent." << endl;
	cout << "get msg " << meg << endl;

	return;
}
