// 3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n,summ=0;
cin>>n;
for (int i=0; i<n+1; i=i+2)
{summ=summ+i;}
cout<<summ;
system ("pause");
return 0;
}

