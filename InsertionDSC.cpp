#include <iostream>
#include <vector>
using namespace std;
void insertion(vector<int> &data)
{
    int n = data.size();
    int j;
    for(int i = 1; i<n; i++ )
    {
        int key = data[i];
        j = i-1;
           while(key > data[j] && j>-1)
            {
                data[j+1] = data[j];
                j--;
            }
        data[j+1] = key;
    }
}
int main()
{
    int n;
    cout<<"Insert array length \n";
    cin>>n;
    vector<int> numbers(n);
    cout<<"Insert array data\n";
    for(int i = 0; i<n; i++)
    {
        cin>>numbers[i];
    }

   cout<<"Sorted array \n";
   insertion(numbers);
   for(int num: numbers)
   {
       cout<<num<<" ";
   }

    return 0;
}