#include <iostream>
 #include <cstring> 
 using namespace std; 
class String {
 private: 
    char* str;
 public: 
    
    String(const char* s) {         
	int length = strlen(s);         
	str = new char[length + 1];         
	strcpy(str, s); 
    } 
    int compare(const String& other) const {         
	return strcmp(str, other.str); 
    } 
    String operator+(const String& other) const {         
	int length1 = std::strlen(str);         
	int length2 = std::strlen(other.str);         
	char* concatenatedString = new char[length1 + length2 + 1];         
	strcpy(concatenatedString, str);         
	strcat(concatenatedString, other.str);         
	return String(concatenatedString); 
    } 
    const char* getString() const {         
	return str; 
    } 
}; 
 
int main() {     
	char input1[100], 
	input2[100];     
	cout << "Enter string 1: ";     
	cin.getline(input1, sizeof(input1));     
	cout << "Enter string 2: ";     
	cin.getline(input2, sizeof(input2)); 
    String S1(input1); 
    String S2(input2);    
	String S3 = S1 + S2;     
	 int comparisonResult = S1.compare(S2);     
	 if (comparisonResult == 0) {         
	 cout << "The strings are equal." <<endl;     
	 } 
	 else if (comparisonResult < 0)
	  {         
	  cout << "String 1 is less than string 2." << endl; 
	  
      }
	 else {       
	   cout << "String 1 is greater than string 2." <<endl;
	    
         } 
    cout << "Concatenated string: " << S3.getString() <<endl; 
 	return 0; 
} 

