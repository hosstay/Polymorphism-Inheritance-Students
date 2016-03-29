/*
 * GradStudent.cpp
 *
 *  Created on: Feb 29, 2016
 *      Author: Taylor Hoss, X432Z869
 *  Assignment: 2
 *
 */
#ifndef IOSTREAM_
#define IOSTREAM_
	#include <iostream>
#endif /* IOSTREAM_ */

#include "gradstudent.h"

//string parameter to initialize base class
GradStudent::GradStudent(std::string name, std::string r_area) : Student(name), m_research_area(r_area)
{}

//empty destructor, doesn't need to do anything
GradStudent::~GradStudent()
{}

void GradStudent::print(void) const
{
	std::cout<<"Grad Student "<<Student::name()<<" has research area "<<m_research_area<<".\n";
}
