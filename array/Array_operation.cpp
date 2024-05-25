 #include<iostream> 
 using namespace std;
  class Array { 
 	int size;  
	int ar[10];   	
	 public: 
 	void initialize(){  	 	
				 	cout<<"Enter the no of elements in array: "; 
			 	 	cin>>size;  	 	
					int i; 
			 	 	for(i=0;i<size;i++){  	 	 
					  	cout<<"Enter the element"; 
			 	 	 	cin>>ar[i]; 
			 	 	}
		  } 
 	 
 	void display()
	 { 
 	 	int d; 
 	 	cout<<"The array elements are: ";  	 
		  	for(d=0;d<size;d++)
			  { 
 	 	 		cout<<ar[d]<<" "; 	 	 
 	 			} 
 	 	cout<<endl; 	 
 	} 
 
 	void search()
	 { 
			int s,b; 
			cout<<"Enter the element to be searched: "; 	 
			cin>>s; 
 	 	for(b=0;b<size;b++)
		  {  	 
		  	 	if(ar[b] == s)
				   {  	 	 	 	
					cout<<"Element is found "<<endl; 
 	 	 	 		break;  	 	 
 	 	 			} 
 			} 
 	 	if(b==size)
		  {  	 	 
		  	cout<<"Element not found "<<endl; 	 	 
 	 	} 
 	} 
 	void sort()
	 {  	 
	 	int i,j,swap;  	 
		 	for(i=0;i<size;i++)
			 {  	 	 
			 	for(j=i;j<size;j++)
				 {  	 	 	 
				 	if(ar[j]<ar[i])
					 { 
 	 	 	 	 	swap=ar[j];  	 	 
			 	 	ar[j]=ar[i]; 
 	 	 	 	 	ar[i]=swap; 	 	 	 	 
 	 	 	 		 } 	 	 	 
 	 	 	   	 } 	 	 
 	 	     } 
 	 	cout<<"Elements are sorted "<<endl; 
 	} 
 	void reverse(){ 
		int i,j,r; 
		i=size-1; 
		j=0; 
 	 	while(j<i)
		  { 
 	 	 	r=ar[j]; 
 	 	 	ar[j]=ar[i];  	 	 
			ar[i]=r; 
 
 	 	 	j++;  	 	 	
			i--; 	 	 
 	      } 
 	 	cout<<"Elements are reversed "<<endl;  
 	} 
}; 
int main(){ 
 	int n;  Array a; 
 	a.initialize(); 
        while(1){ 
 	 	cout<<"---------------------"<<endl;  	 
		cout<<"Enter 1 to display"<<endl;  	 
		cout<<"Enter 2 to search"<<endl;  	 	
		cout<<"Enter 3 to sort"<<endl;  	 	
		cout<<"Enter 4 to reverse"<<endl;  	 	
		cout<<"0 to exit"<<endl; 
 	 	cin>>n; 
 	 
switch(n){ 
	 	case 1:a.display(); 
	 	 	break; 
 	 	 	case 2:a.search(); 
 	 	 	 	break; 
 	 	 	case 3:a.sort(); 
 	 	 	 	break; 
 	 	 	case 4:a.reverse(); 
 	 	 	 	break; 
 	 	 	case 0:exit(0);  	 	 	
			default:cout<<"Wrong option"<<endl;  	 
 	 	} 	 
 	} 
 
 	return 0; 
} 

