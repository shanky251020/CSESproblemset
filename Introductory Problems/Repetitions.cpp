#include <iostream>
using namespace std;

int main() {
	int ans =1;
	int count=1;
	string str;
	cin>>str;
	for(int i=1;i<str.length();i++)
	{
		// checking if the previous alphabet is same or not if it is increase the counter , otherwise count =1 and store the ans.
		if(str[i]==str[i-1])
		{
			count++;
		}
		else
		count=1;
	ans = max(ans,count);	
	}
	cout<<ans;
	return 0;
}