#include <iostream>
#include <fstream>
using namespace std;
ifstream ifs("student.txt");
int main()
{
	int n;
	ifs>>n;
	for (size_t i = 0; i < n; i++)
	{
	string name;
	int sum,s1,s2;
	float avg;

	ifs.open("student.txt",std::ifstream::in);
	ifs>>name;
	ifs>>s1;
	ifs>>s2;
	ifs.close();
	for ( size_t j=0; j<2; j++)
	{
	sum=s2+s1;
	avg=sum/2;
	cout<<name<<" "<<sum<<" "<<avg<<"\n";
	}
}
}