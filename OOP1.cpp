#include <iostream>
#include "Student.h"

int main()
{
	setlocale(0, "");

	const int size = 10;
	Student students[size]; // Массив из студентов

	for (int i = 0; i < size; i++)
		students[i] = Student(i, "Name", rand() % 70);

	for (int i = 0; i < size; i++)
		students[i].Print();
}