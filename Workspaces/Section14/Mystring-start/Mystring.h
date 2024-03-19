#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
    
private: 
    char *str;          // pointer to a char[] that holds a C-style string
    
public:
    Mystring();                 // No-args constructor
    Mystring(const char *s);    // Overloaded constructor
    Mystring(const Mystring &source);   // Copy Constructor
    ~Mystring();        // Destructor
    void display() const;
    int get_length() const;     // getters
    const char *get_str() const;

};

#endif // MYSTRING_H
