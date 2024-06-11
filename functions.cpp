#include<iostream>
using namespace std;
int compare(int a, int b) //compares 2 integer and return greatest
{
	int c;
	if(a>b)
	{
		c=a;
		//return a;
	}
	else
	{
		c=b;
		//return b;
	}
	//now c will store the maximum value of a,b
	return c;
}
int compare(int a, int b)
{
	if(a==5)
	{
		return 1;
	}
	return 0;
}
