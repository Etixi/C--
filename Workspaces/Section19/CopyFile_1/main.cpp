#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
    
    ifstream in_file {"../Section19/CopyFile_1/poem.txt"};
    ofstream out_file {"../Section19/CopyFile_1/poem_out.txt"};
    
    if(!in_file){
        cerr << "Error opening input file" << endl;
        return 1;
    }
    
    if(!out_file){
        cerr << "Error opening output file" << endl;
        return 1;
    }
    
    string line{};
    while (getline(in_file, line)) {
        out_file << line << endl;
    }
    cout << "File copied" << endl;
    in_file.close();
    out_file.close();
    
    return 0;
}
