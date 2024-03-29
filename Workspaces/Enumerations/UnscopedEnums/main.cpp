#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Used for test1

enum Direction {North, South, East, West};

// enum Street {Main, North, Elm};  // Error can't use North again


// Used for test 1
// This function expects a Direction parameter
// and returns its string representation

string direction_to_string(Direction direction){
    string result;
    switch(direction){
        case North:
            result = "North";
            break;
        case South:
            result = "South";
            break;
        case East:
            result = "East";
            break;
        case West:
            result = "West";
            break;
        default:
            result = "Unknown direction";
            
    }
    return result;
}

// Sample example that show the use of an unscoped enumeration
void test1(){
    cout << "\n-- Test1 ------------------------------\n" << endl;
    
    Direction direction{North};
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;
    
    direction = West;
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;
    
    // direction = 5;   // Compiler Error
    
    // Be careful casting since the compiler will assume
    // you known what you are doing!
    direction = Direction(100);
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;
    
    direction = static_cast<Direction>(100);
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;
}

// Used for test 2
// Unscoped enumeration representing items for a grocery shopping list
enum Grocery_Item {Milk, Bread, Apple, Orange};

// Overloading the stream insertion operator to insert 
// the string representation of the provided Grocery_Item
// parameter into the output stream

ostream &operator<<(ostream &os, Grocery_Item grocery_item)
{
    switch(grocery_item){
        case Milk:
            os << "Milk";
            break;
        case Bread:
            os << "Bread";
            break;
        case Apple:
            os << "Apple";
            break;
        case Orange:
            os << "Orange";
            break;
        default:
            os << "Invalid item";
    }
    return os;
}

// Used for test2
// Returns a boolean depending on whether the Grocery Item
// parameter is a valid enumerator or not.

bool is_valid_grocery_item(Grocery_Item grocery_item)
{
    switch(grocery_item){
        case Milk:
        case Bread:
        case Apple:
        case Orange:
            return true;
        default:
            return false;
    }
}

// Used for test2
// Given a vector of Grocery_Items, this function displays
// the string representation of each item using the overloaded
// operator<< functions.
// This function also keeps track pf how many valid and invalid items
// are in the provided vector by using the is valid grocery item function
// written above

void display_grocery_list(const vector<Grocery_Item> &grocery_list)
{
    cout << "Grocery List" << "\n================================" << endl;
    int invalid_item_count{0};
    int valid_item_count{0};
    
    for (Grocery_Item grocery_item: grocery_list)
    {
        cout << grocery_item << endl;   //User the overloaded operator
        
        // check that grocery is valid grocery item
        if (is_valid_grocery_item(grocery_item))
            valid_item_count++;
        else
            invalid_item_count++;
    }
    
    cout << "====================================" << endl;
    cout << "Valid items: " << valid_item_count << endl;
    cout << "Invalid items: " << invalid_item_count << endl;
    cout << "Total items: " << valid_item_count + invalid_item_count << endl;
}


// Using an unscoped enumeration to model grocery items
void test2(){
    cout << "\n-- Test2 ------------------------------\n" << endl;
    
    vector<Grocery_Item> shopping_list;
    
    shopping_list.push_back(Apple);
    shopping_list.push_back(Apple);
    shopping_list.push_back(Milk);
    shopping_list.push_back(Orange);
    
    // Grocery_Item item = 100;             // Compile Error
    
    // Be careful when casting
    int Helipcoter {1000};
    
    shopping_list.push_back(Grocery_Item(Helipcoter));  // Invalid item
    shopping_list.push_back(Grocery_Item(0));   // Will add Milk again
    
    display_grocery_list(shopping_list);
    
}

// Used for test3
// Unscoped enumerations holding the possible states
// and sequences of a rocket launch.
// Note the addition of Unknown enumerator for the State enumeration
enum State {Engine_Failure, Inclement_Weather, Nominal, Unknown};
enum Sequence {Abort, Hold, Launch};

// Used for test3
// Overloading the stream extraction operator to allow a user
// to enter the state of State enumeration.
// Note the use of underlying_type_t.

istream &operator>>(istream &is, State &state)
{
    // int user_input;  //will also work
    underlying_type_t<State> user_input;
    is >> user_input;
    
    switch(user_input){
        case Engine_Failure:
        case Inclement_Weather:
        case Nominal:
        case Unknown:
            state = State(user_input);
            break;
        default:
            cout << "User input is not a valid launch state." << endl;
            state = Unknown;
    }
    return is;
}

// Used for test3
// Overloading the stream insertion operator to insert 
// the string representation of the provided Sequence
// parameter into the output stream

ostream &operator<<(ostream &os, Sequence &sequence)
{
    switch(sequence){
        case Abort:
            os << "Abort";
            break;
        case Hold:
            os << "Hold";
            break;
        case Launch:
            os << "Launch";
            break;
    
    }
    return os;
}

// Used for test3
// Displays an information message given the sequence parameter.
void initiate(Sequence sequence)
{
    cout << "Initiate " << sequence << " sequence!" << endl; // Uses overloaded operator<<
}

// Using scoped enums to control a rocket launch
// Reads from the user for the State of the rocket laucn,
// and then determines which Sequence to execute.

void test3(){
    cout << "\n-- Test3 ------------------------------\n" << endl;
    
    State state;
    cout << "Launch state: " ;
    cin >> state;       //users the overloaded operator>>
    
    switch(state){
        case Engine_Failure:    //Abort if Engine Failure
        case Unknown:           // or Unknown!
            initiate(Abort);
            break;
        case Inclement_Weather:
            initiate(Hold);
            break;
        case Nominal:
            initiate(Launch);
            break;
    }
}

int main(){
    
    test1();
    test2();
    test3();
    
    return 0;
}
