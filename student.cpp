/*
 * Student.cpp
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

#include "student.h"

//sets m_name to input string parameter using initialization
Student::Student(std::string name) : m_name(name)
{}

//empty destructor, doesn't need to do anything
Student::~Student()
{}

void Student::print(void) const
{
	std::cout<<"Student "<<m_name<<"/n";
}
