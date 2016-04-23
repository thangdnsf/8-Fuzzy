#include <iostream>
using namespace std;
#include "searchTree.h"
#include <time.h>
#define START_TIME clock_t start,finish; start=clock();
#define FINISH_TIME finish=clock(); cout<<"Time: "<<finish-start<<endl;
void main()
{
	START_TIME
		searchTree t;
		t.build();
	FINISH_TIME
}
