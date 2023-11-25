#include<iostream> 
#include<conio.h> 
using namespace std; 
class Shell{
	public:
		void Sort(int*,int);
		void display(int*,int);
};
void Shell::Sort(int arr[], int n)
{
	int temp,gap,j,i;
	for(gap=n/2;gap>0;gap /= 2)
	{
		for(j = gap;j<n;j+=1)
		{
			temp = arr[j];
			i=0;	
			for(i=j;i>=gap && arr[i-gap]>temp;i=i-gap)
			{
				arr[i] = arr[i-gap];
			}
			arr[i] = temp;
		}
	}
}
void Shell::display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	
}
int main() 
{ 
	Shell s1;
	int n;
	cout<<"Enter the size of the array: "<<endl;
	cin>>n;
	int arr[n],i;
	cout<<"Enter "<<n<<" integers in any order"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"Before Sorting: "<<endl;
	s1.display(arr,n);		
	cout<<endl<<endl<<"SHELL SORT "<<endl;
	s1.Sort(arr, n); 
	cout<<endl<<"After Sorting: "<<endl;
	s1.display(arr,n);
	getch();
}
