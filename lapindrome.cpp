#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{
	int count = 0, i, j, T;
	cin >> T;
	while(T--)
	{
		string str;
		bool flag = true;
		cin >> str;
		int l = str.length();
		int mid = l/2;
		int hash[26] = {0};
		for(i = 0; i < mid; i++)
		{
			int x = str[i] - 'a'; // str = "gaga" /'g'-'a' = 102 - 96 = 6
			hash[x]++;
		}
		if(l%2 != 0)
			mid = mid + 1;
		for(j = mid; j < l; j++)
		{
			int y = str[j] - 'a';
			hash[y]--;
		}

		for(i = 0; i < 26; i++)
		{
			if(hash[i] != 0)
			{
				flag = false;
				break;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}	
