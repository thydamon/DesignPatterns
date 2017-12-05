/*************************************************************************
    > File Name: main.cpp
    > Author: Damon
    > Mail: thydamon@gmail.com 
    > Created Time: Mon 04 Dec 2017 07:27:50 PM EST
 ************************************************************************/

#include <iostream>
using namespace std;

#include "Observer.h"
#include "Subject.h"

int main()
{
	SeekJobCenter *s = new SeekJobCenter();
	UniversityStudent *u = new UniversityStudent();
	OverseasStudent *o = new OverseasStudent();
	s->addObserver(u);
	s->addObserver(o);
        
	s->giveNewMessage("I am seeking a softwave engineer.");
	s->notifyObserver();
	s->giveNewMessage("I am seeking a mathematician.");
	s->notifyObserver();

	delete s;
	delete u;
	delete o;

	return 0;
}
