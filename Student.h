#include <iostream>
#pragma once

using namespace std;

class Student
{
public: // ��������� ������
	string name;

	Student(); // ������ �����������

	Student(int id, string n, int age); // ����������� � �����������

	~Student(); // ������ ����������

	void Print(); // ����� ���� ����������

	int GetAge(); // ������ ��� ��������

	void SetAge(int age); // ������ ��� ��������

private: // ��������� ������
	int _id{};
	int _age{};
};
