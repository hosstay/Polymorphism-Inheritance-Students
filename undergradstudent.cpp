/*
 * UndergradStudent.cpp
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

#include "undergradstudent.h"

//constructor with string parameter to initialize base class
UndergradStudent::UndergradStudent(std::string name) : Student(name)
{}

//empty destructor, doesn't need to do anything
UndergradStudent::~UndergradStudent()
{}

//prints each string held in m_class vector up to its size
void UndergradStudent::print_class_list(void) const
{
	for (unsigned int i = 0; i < m_class.size(); i++)
	{
		std::cout<<"Class "<<i+1<<": "<<m_class.at(i)<<"\n";
	}
}

//adds input string to vector list of classes
void UndergradStudent::add_class(std::string enrolled)
{
	m_class.push_back(enrolled);
}

void UndergradStudent::print(void) const
{
	std::cout<<"Undergrad Student "<<Student::name()<<" is currently enrolled in "<<m_class.size()<<"courses.\n";
}
