#include <iostream>
using namespace std;

int main() {
    int array[4];
    for (int i=0; i<4; i++)
    {
        cin>>array[i];
    }
        int count = 0;
        for(int j=0; j<4; j++)
        if (array[j]>=10)
        {
            count++;
        }
        cout<<count<<endl;
        
	// your code goes here
	return 0;
}
