#include <iostream>
using namespace std;

//Josephus problem
int fun(int n,int k){
	if(n==1)
		return 0;
	return (fun(n-1,k)+k)%n;

// Index-1 Solution
//	if(n==1)
//		return 1;
//	return (fun(n-1,k)-1+k)%n+1;
}
int find(int n, int k)
{
    int sum = 0, i;
    cout <<endl;
    // For finding out the removed
    // chairs in each iteration
    for (i = 2; i <= n; i++)
    {
        sum = (sum + k) % i;
        cout<<sum<<" ";
    }
    cout<<endl;

    return sum + 1;
}
int main()
{
	cout<< fun(5,2)+1;
	cout<< find(7,3);
	cout<< find(5,2);
    return 0;
}
