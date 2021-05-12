#pragma once
#include<iostream>
#include <algorithm>
#include<string>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

//search Function
template<typename T>
int linerSearch(vector<T> arr, T target)
{
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == target)
			return i;
	}
}
//end

//generate vector random data
template<typename T>	//Generate random vector require vector argument
vector<T> generateRandomData(vector<T> &arr,int size,T celing = 0, T floor = 0)
{
	srand(unsigned(time(NULL)));
	if (floor == 0 && celing == 0)
		celing = size;
	for (int i = 0; i < size; i++)
		arr.push_back(rand() % floor+ celing);
	return arr;
}
template<typename T>	// Generate random vector without require vector argument
vector<T> generateRandomData(int size, T celing = 0, T floor = 0)
{
	vector<int> arr;
	srand(unsigned(time(NULL)));
	if (floor == 0 && celing == 0)
		celing = size;
	for (int i = 0; i < size; i++)
		arr.push_back(rand() % floor + celing);
	return arr;
}

template <typename T>
vector<T> generateRandomData(int size, const bool repeat, T celing = 0, T floor = 0)
{
	vector<int> arr;
	srand(unsigned(time(NULL)));
	if( floor == 0 &&celing == 0)
		celing = size;
	
	return arr;
}
//end

//generate Lack vector
template<typename T>
vector<T> generateLackData(vector<T> &arr, int size, T start = 0,T lack = 1)
{
	for (int i = 0; i < size; i++)
		arr.push_back(start + (lack * i));
	return arr;
}
template<typename T>
vector<T> generateLackData(int size, T start = 0, T lack = 1)
{
	vector<T> arr;
	for (int i = 0; i < size; i++)
		arr.push_back(start + (lack * i));
	return arr;
}

//Print Array Function
template<typename T>
void printArrays(vector<T> &arr)
{
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}

template<typename T>
void printArrays(string title, vector<T> &arr)
{
	cout << "-----" << title << "-----" << endl;
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
}
//end