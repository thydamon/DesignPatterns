/*************************************************************************
    > File Name: Observer.h
    > Author: Damon
    > Mail: thydamon@gmail.com 
    > Created Time: Mon 04 Dec 2017 07:11:54 PM EST
 ************************************************************************/

#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <iostream>
using namespace std;
#include "Subject.h"

class Observer
{
	public:
		Observer() {};
		virtual ~Observer() {};

		virtual void hearTelephone(string meg) = 0;
};

class UniversityStudent: public Observer
{
	public:
		UniversityStudent();
		~UniversityStudent() {}

		void hearTelephone(string meg);

	private:
		Subject *subject;
};

class OverseasStudent: public Observer
{
	public:
		OverseasStudent();
		~OverseasStudent() {}

		void hearTelephone(string meg);

	private:
		Subject *subject;
};

#endif
