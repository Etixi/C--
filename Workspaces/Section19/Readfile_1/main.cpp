// Section 19 : Test for file open and simple read of 3 data items

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    ifstream in_file;
    string line;
    int num;
    double total;
    
    in_file.open("../Section19/Readfile_1/test.txt");
    if (!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }
    
    in_file >> line >> num >> total;
    cout << line << endl;
    cout << num << endl;
    cout << total << endl;
    in_file.close();
    
    return 0;
}
