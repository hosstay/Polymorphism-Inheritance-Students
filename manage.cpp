/*
 * manage.cpp
 *
 *  Created on: Feb 29, 2016
 *      Author: Taylor Hoss, X432Z869
 *  Assignment: 2
 *
 *  Description:
 *
 */

#ifndef STUDENT_H_
#define STUDENT_H_
	#include "student.h"
#endif /* STUDENT_H_ */

#ifndef GRADSTUDENT_H_
#define GRADSTUDENT_H_
	#include "gradstudent.h"
#endif /* GRADSTUDENT_H_ */

#ifndef UNDERGRADSTUDENT_H_
#define UNDERGRADSTUDENT_H_
	#include "undergradstudent.h"
#endif /* UNDERGRADSTUDENT_H_ */

#ifndef IOSTREAM_
#define IOSTREAM_
	#include <iostream>
#endif /* IOSTREAM_ */

#ifndef STRING_
#define STRING_
	#include <string>
#endif /* STRING_ */

#ifndef VECTOR_
#define VECTOR_
	#include <vector>
#endif /* VECTOR_ */

int main(void)
{

	Student *s = new Student("One");
	UndergradStudent *u = new UndergradStudent("Two");
	GradStudent *g = new GradStudent("Three", "Software engineering");

	u->add_class("OOP");
	u->add_class("Operating Systems");
	u->add_class("Algorithms");

	std::vector<Student*> list;
	list.push_back(s);
	list.push_back(u);
	list.push_back(g);

	for(unsigned int i = 0; i < list.size(); i++)
	{
		list.at(i)->print();
	}

	delete s;
	delete u;
	delete g;

}
