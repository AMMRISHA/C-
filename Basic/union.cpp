
// union of two array and find out the elements of the union sets
#include<iostream>

using namespace std;

class Union{
	private:
		int count=0,m,n;
		int arr1[], arr2[];
	public:
		int unionElemnts(int arr1[],int  arr2[],int  m, int n){
				
				int i =0,j=0;
				while(i<m && j<n)
				{
					if(arr1[i]<arr2[j])	
						cout<<arr1[i++];
					else if(arr2[j]<arr1[i])
						cout<<arr2[j++];
					else
					{
						cout<<arr2[j];
						i++;
					}
						
				}
				while(i<m)
				{
					cout<<arr1[i++];
				}
				while(j<n)
				{
					count<<arr2[j++];
				}
				
				return count;
		}
};
int main()
{
 int arr1[20] , arr2[20];
 	int count=0,m,n;
 int  No_of_elements;
 cout<<"Enter the first array elements number:";
 cin>>m;
 cout<<"Enter the fisrst array elements:";
 for(int i=0;i<m;i++)
 {
 	cin>>arr1[i];
 }
 cout<<"Enter the second array elements number:";
 cin>>n;
  for(int i=0;i<n;i++)
 {
 	cin>>arr2[i];
 }	
 
 Union ob;
 
 No_of_elements = ob.unionElemnts(arr1, arr2, m,n);
}
