#pragma once
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

//-----------------------------Search data function----------------------------------------
template<typename T>
int linerSearch(vector<T> arr, T target)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == target)
			return i;
	}
	return -1;
}
//----------------------------------------------------------------------------------

//-----------------------------generateRandomData(Vector Version)----------------------------------------


template<typename T>	//Generate random vector REQUIRE vector argument
vector<T> generateRandomData(vector<T> &arr,int size,T celing = 0)
{
	srand(unsigned(time(NULL)));
	if ( celing == 0)
		celing =  size;
	for (int i = 0; i < size; i++)
		arr.push_back(rand() % celing);
	return arr;
}

template<typename T>	//Generate random vector REQUIRE vector argument
vector<T> generateRandomData(vector<T> &arr, int size, T floor, T celing )
{
	srand(unsigned(time(NULL)));
	if (floor == 0 && celing == 0)
		celing = floor + size;
	for (int i = 0; i < size; i++)
		arr.push_back(rand() % floor + celing);
	return arr;
}

//----------------------------------------------------------------------------------


//---------------------------generateRandomData(Dummy Version)--------------------------------------

template<typename T>	// Generate random vector without WITHOUT vector argument
vector<T> generateRandomData(T DUMMY, int size, T celing = 0)
{
	vector<int> arr;
	srand(unsigned(time(NULL)));
	if (celing == 0)
		celing =  size;
	for (int i = 0; i < size; i++)
		arr.push_back(rand() %  celing);
	return arr;
}

template<typename T>	// Generate random vector without WITHOUT vector argument
vector<T> generateRandomData(T DUMMY, int size, T floor , T celing )
{
	vector<int> arr;
	srand(unsigned(time(NULL)));
	if (floor == 0 && celing == 0)
		celing = floor + size;
	for (int i = 0; i < size; i++)
		arr.push_back(rand() % floor + celing);
	return arr;
}

//----------------------------------------------------------------------------------


//-----------------------------generateNonRepeatRandomData(Vector Version)----------------------------------------

template<typename T>	//Generate non repeat random vector REQUIRE vector argument end
vector<T> generateNonRepeatRandomData(vector<T> &arr, int size, T celing = 0)
{
	srand(unsigned(time(NULL)));
	if ( celing == 0 || celing <= size)
		celing =  size;

	int pushTime = 0;
	while (pushTime < size)
	{
		int rdNum = rand() % celing ;
		if (linerSearch(arr, rdNum) == -1)
		{
			arr.push_back(rdNum);
			pushTime++;
		}
	}
	return arr;
}

template<typename T>	//Generate non repeat random vector REQUIRE vector argument start & end
vector<T> generateNonRepeatRandomData(vector<T> &arr, int size, T floor , T celing )
{
	srand(unsigned(time(NULL)));
	if (floor == 0 && celing == 0 || celing - floor <= size)
		celing = floor + size;

	int pushTime = 0;
	while (pushTime < size)
	{
		int rdNum = rand() % celing + floor;
		if (linerSearch(arr, rdNum) == -1)
		{
			arr.push_back(rdNum);
			pushTime++;
		}
	}
	return arr;
}

//---------------------------------------------------------------------


//-----------------------generateNonRepeatRandomData(DUMMY Version)---------------------------

template<typename T>	//Generate non repeat random vector WITHOUT vector argument end
vector<T> generateNonRepeatRandomData(T DUMMY, int size, T celing = 0)
{
	vector<int> arr;
	srand(unsigned(time(NULL)));
	if (celing == 0 || celing <= size)
		celing =  size;

	int pushTime = 0;
	while (pushTime < size)
	{
		int rdNum = rand() % celing ;
		if (linerSearch(arr, rdNum) == -1)
		{
			arr.push_back(rdNum);
			pushTime++;
		}
	}
	return arr;
}

template<typename T>	//Generate non repeat random vector WITHOUT vector argument start & end
vector<T> generateNonRepeatRandomData(T DUMMY, int size, T floor, T celing = 0)
{
	vector<int> arr;
	srand(unsigned(time(NULL)));
	if (floor == 0 && celing == 0 || celing - floor <= size)
		celing = floor + size;

	int pushTime = 0;
	while (pushTime < size)
	{
		int rdNum = rand() % celing + floor;
		if (linerSearch(arr, rdNum) == -1)
		{
			arr.push_back(rdNum);
			pushTime++;
		}
	}
	return arr;
}

//---------------------------------------------------------------------


//-------------------------generateLackData-----------------------------
template<typename T>	//Generate LACK vector REQUIRE vector argument
vector<T> generateLackData(vector<T> &arr, int size, T start = 0,T lack = 1)
{
	for (int i = 0; i < size; i++)
		arr.push_back(start + (lack * i));
	return arr;
}
template<typename T>	//Generate LACK vector WITHOUT vector argument
vector<T> generateLackData(T DUMMY,int size, T start = 0, T lack = 1)
{
	vector<T> arr;
	for (int i = 0; i < size; i++)
		arr.push_back(start + (lack * i));
	return arr;
}

//---------------------------------------------------------------------


//------------------------------printArrays---------------------------------------
template<typename T>	
void printArrays(vector<T> &arr)
{
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}

template<typename T>	//print title before print array
void printArrays(string title, vector<T> &arr)
{
	cout <<"-----" << title << "-----" << endl;
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}
//---------------------------------------------------------------------

