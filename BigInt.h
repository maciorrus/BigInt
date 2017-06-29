#ifndef BIGINT_H
#define BIGINT_H
#include <vector>

using namespace std;

class BigInt
{
	public:
		BigInt();
	protected:
	private:
		vector<unsigned int> digits; 
		unsigned int coma;
};

#endif
