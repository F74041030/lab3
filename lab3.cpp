#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
	int sum;
	int num_of_cow;
	ifstream filein("file.in");
	filein>>num_of_cow;
	int weight_of_cow[num_of_cow];
	int i;
	for(i=0;i<num_of_cow;i++)
	{   
		filein>>weight_of_cow[i];
		if(weight_of_cow[i]==0)
			break;
	}
	filein.close();
	vector<int> vector(weight_of_cow,weight_of_cow+num_of_cow);
	sort(vector.begin(), vector.end());
	sum=vector[num_of_cow-1]+vector[num_of_cow-2]+vector[num_of_cow-3]+vector[num_of_cow-4]+vector[num_of_cow-5];
cout<<sum<<endl;

		return 0;

}
