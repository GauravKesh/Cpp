#include<iostream>
using namespace std;
int main(){
    // declaring a  variable using string data type  "string"
    string a = "Hello world";
    cout<<a<<"\n";

    // taking string input from user

    string b;
    cout<<("Enter your name ");
    cin>>b;
    cout<<b<<"\n";

    //                   Concatenation of strings in c++

    string fname,lname ,cname;
    fname = "joker";
    lname = "backend";
    cname = fname +" "+lname;
    cout<< cname ;

    //                           append();

    string acname = fname.append(lname);
    cout<< "\n" <<acname;
    /*
        A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function
    */
   // Numbers and strings

   string j="hey",k="sir",m="5",n="6";
   int x=5,y=6;
   
   cout << "\n"<<x+m; //it'll ""{give invalid operands to binary expression ('int' and 'string' (aka       basic_string<char>'))}"" cause we cannot add or concat to different data types int and string

   cout << "\n"<<x+y; // no error the output will be 11

   cout << "\n"<<j+k; //It'll ""{give invalid operands to binary expression ('int' and 'string' (aka 'basic_string<char>'))}"" cause we cannot add or concat to different data types int and string

   cout << "\n"<<m+n; //it will give 56 cause here m and n are string so it'll concat 


        //          ******C++ String Length****

        // To get the length of a string, use the length() function:

        // variable.length()

        string kk = "DLSHFUI";

        //this will store the length of the given string here we're using length() function to find the length

        int len = kk.length(); 
        cout<<len;  // displaying the length of given string; output:-- 7


         //You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). It is completely up to you if you want to use length() or size():

         cout<<kk.size(); // it's same work as length;


         // **** Accesing elemts of string ****

         string h = "joker";
         cout<<h[2]; //it'll give "k" as output;

         //changing value of a elements in string

         h[0]='N';
         cout<<h; // output will be "Noker";
         

         // *** special Characters in c++ ***
        /*
         Escape-character	Result	  Description
               \'	            '	   Single quote
              \"	            "	   Double quote
              \\	            \	   Backslash
              \n	                   New Line	 // create a newline for any input or output
              \t	                   Tab  // shift 2{default} or more space at right side from left

        */

       // ********** Omitting Namespace ************

       // In some C++ programs that runs without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects:

       /*
            #include <iostream>
            #include <string>

            int main() {
            std::string greeting = "Hello";
            std::cout << greeting;
            return 0;
}
       
       */





    return 0;
}