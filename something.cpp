#include <bits/stdc++.h> 
using namespace std; 
int main () 
{ 
    char filename[100]; 
    cout << "Enter file name to compile "; 
    cin.getline(filename, 100); 
  
    // Build command to execute.  For example if the input 
    // file name is a.cpp, then str holds "gcc -o a.out a.cpp"  
    // Here -o is used to specify executable file name 
    string str = "gcc "; 
    str = str + " -o abctest " + filename; 
  
    // Convert string to const char * as system requires 
    // parameter of type const char * 
    const char *command = str.c_str(); 
  
    cout << "Compiling file using " << command << endl; 
    system(command); 
  
    cout << "\nRunning file \n"; 
    system("./abctest");

    system("sudo cp -i abctest /usr/local/bin");

    



   
  
    return 0; 
} 