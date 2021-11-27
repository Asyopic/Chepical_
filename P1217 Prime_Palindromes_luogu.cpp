#include<iostream>
#include<cstdio>
using namespace std;
bool isprime(int n){
	if(n < 2)
	{
        return 0;
	}
	for(int i = 2; i * i <= n; ++i)
	{
		if(n % i == 0)
		{
            return 0;
		}
	}
	return 1;
}
bool restring(int a){
    int str = 0, b = a;
    while(b != 0){
        str *= 10; str += b % 10;
        b /= 10;
    } 
    if(str == a)return 1;
    else return 0;
}

int main(){
    int start = 0, end = 0;
    cin >> start >> end;
    if(start % 2 == 0) start++;
    if(end > 9999999)  end = 9999999;
    for(int q = start; q <= end; q+=2)
    {
        if(restring(q))
        {
            if(isprime(q))
            {
            cout << q << "\n";
            }
        }
    }
}
