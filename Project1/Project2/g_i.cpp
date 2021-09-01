#include <iostream>
#include <string>
using namespace std;
int g_per count;

{
	name = “”, id = “”;
	age = 0; gender = 0; height = 0;
	g_person_count++;
	cout << “current person count : ” << g_person_count << endl;
}
Person::Person(const string& name, const string& id, unsigned char age, unsigned char gender, unsigned char height)
{
	this->name = name; 	this->id = id;
	this->age = age;	this->gender = gender;
	this->height = height;
	g_person_count++;
	cout << “current person count : ” << g_person_count << endl;
}
Person& Person::operator=(const Person& p)
{
	name = p.name;	id = p.id;
	age = p.age;	gender = p.gender;
	height = p.height;
	return *this;
}
Person::~Person()
{
	g_person_count--;
	cout << “current person count : ” << g_person_count << endl;
}
void Person::ShowInfo()
{
	cout << "이름 : " << name << ", 주민번호 : " << id << endl;
}

int main(void)
{
	Person p1 = Person(“강감찬”, “1234561234567”, 45, 1, 160);
	Person p2;
	p2 = p1;

	return 0;
}
