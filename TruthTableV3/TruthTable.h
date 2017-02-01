#pragma once
#include <iostream>
#include <math.h>

using namespace std;


class TruthTable {
public:
	TruthTable(const int x = 0);						//Constructor
	TruthTable(const TruthTable& t);					//Copy Constructor
	~TruthTable();

	//Getters
	inline int getCols() { return colCount; }
	inline int getRows() { return rowCount; }

	void printTable();




protected:
	int colCount;
	int rowCount;
	bool** table;
	//int table[colCount][rowCount];

	//int table[2][4] = { 0 };
	//int table[i][j] = { 0 };


	//const unsigned n = 3;
	//unsigned num_to_fill = 1U << (n - 1);	//Fill half the rows at once.

	//std::vector<std::vector<int>> output = std::vector<std::vector<int>>(n, std::vector<int>(1 << n));
	//Creates a vector of vectors with outer length n, inner length 2^n. All initalized to zero.
};

//std::ostream&  operator<< (std::ostream& outStream, std::vector output)