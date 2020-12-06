#include <iostream>
#include <vector>
using namespace std;
void insertion(vector<int> &data)
{
    int aux = 0;
    int n = data.size();
    int j;
    for(int i = 1; i<n; i++ )
    {
        j = i;
            while(data[j]<data[j-1] && j>0)
            {
                aux = data[j];
                data[j] = data[j-1];
                data[j-1] = aux;
                j--;
            }


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
