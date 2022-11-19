#include <iostream>
#pragma once

using namespace std;

class Student
{
public: // Публичные данные
	string name;

	Student(); // Пустой конструктор

	Student(int id, string n, int age); // Конструктор с параметрами

	~Student(); // Пустой деструктор

	void Print(); // Вывод всей информации

	int GetAge(); // Геттер для возраста

	void SetAge(int age); // Сеттер для возраста

private: // Приватные данные
	int _id{};
	int _age{};
};
