#include <bits/stdc++.h> 
using namespace std; 
int main () 
{ 
    char filename[100]; 
    cout << "Enter file name to compile :"; 
    cin.getline(filename, 100); 
  
    // Build command to execute.  For example if the input 
    // file name is a.cpp, then str holds "gcc -o a.out a.cpp"  
    // Here -o is used to specify executable file name 
    string str = "gcc ";

    string helloHunnyCommand = "helloHunnyCommand";
    str = str + " -o "+helloHunnyCommand + " "  + filename; 
  
    // Convert string to const char * as system requires 
    // parameter of type const char * 
    const char *command = str.c_str(); 
  
    cout << "Compiling file using " << command << endl<<endl; 
    system(command); 
  
    //cout << "\nRunning file \n"; 
    //system("./helloHunnyCommand");

    string searchStr = "[ -f /usr/local/bin/"+helloHunnyCommand+" ]";

    const char *srcCommand = searchStr.c_str(); 

    if(system(srcCommand) == 0) cout<<"FOUND the program file in /usr/local/bin"<<endl<<endl;
    else cout<<"NOT FOUND the program file in /usr/local/bin"<<endl<<endl;

    cout<<"Adding the program file to the /use/local/bin folder....."<<endl;

    string copytobin = "sudo cp -i "+helloHunnyCommand+" /usr/local/bin";

    const char *copytobinCommand = copytobin.c_str(); 
    system(copytobinCommand);

    cout<<"Adding done...."<<endl;


    cout<<"Running "+ helloHunnyCommand +" as a command"<<endl;
    
    const char *helloHunnyCommandline = helloHunnyCommand.c_str();

    system(helloHunnyCommandline);
  
    return 0; 
} 