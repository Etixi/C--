#include <iostream>
#include <array>
#include <algorithm> // Inclure l'en-tête <algorithm> pour utiliser la fonction sort
#include <numeric>


using namespace std;

// Display the array -- note the size MUST be included
// When passing a std::array to a function
void display(const array<int,5> arr){
    cout << "[";
    for (const auto &i:arr)
        cout << i << " ";
    cout << "]" << endl;
}

void test1(){
    cout << "\n=================================" << endl;
    
    array<int, 5> arr1{1,2,3,4,5};  // double{{}} if C++11
    array<int, 5> arr2;
    
    display(arr1);
    display(arr2);    // Elements are not initialized (contain 'garbage')
    
    arr2 = {10,20,30,40,50};
    
    display(arr1);
    display(arr2);
    
    cout << "Size of arr1 is: " << arr1.size() << endl; //5
    cout << "Size of arr2 is: " << arr2.size() << endl;
    
    arr1[0] = 1000;
    arr1.at(1) = 2000;
    display(arr1);
    
    cout << "Front of arr2: " << arr2.front() << endl;
    cout << "Back of arr2: " << arr2.back() << endl;
}

void test2(){
    cout << "\n=================================" << endl;
    
    array<int, 5> arr1{1,2,3,4,5};  // double{{}} is C++11
    array<int, 5> arr2{10,20,30,40,50};
    
    display(arr1);
    display(arr2);
    
    arr1.fill(0);
    
    display(arr1);
    display(arr2);
    
    arr1.swap(arr2);
    
    display(arr1);
    display(arr2);
}


void test3(){
    cout << "\n=================================" << endl;
    
    array<int, 5> arr1 {1,2,3,4,5}; // double{{}} is C++11
    
    int *ptr = arr1.data();
    cout << ptr << endl;
    *ptr = 10000;
    
    display(arr1);
}

void test4(){
    cout << "\n=================================" << endl;
    
    array<int, 5> arr1 {2,1,4,5,3}; // double{{}} is C++11
    display(arr1);
    
    sort(arr1.begin(), arr1.end());
    display(arr1);
}

void test5(){
    cout << "\n=================================" << endl;
    
    array<int, 5> arr1{2,1,4,5,3};  //double{{}} is C++11
    
    array<int, 5>::iterator min_num = min_element(arr1.begin(), arr1.end());
    auto max_num = max_element(arr1.begin(), arr1.end());
    cout << "min: " << *min_num << " ,max: " << *max_num << endl;
}

void test6(){
    cout << "\n=================================" << endl;
    
    array<int, 5> arr1{2,1,3,3,5};  //double{{}} is C++11
    
    auto adjacent = adjacent_find(arr1.begin(), arr1.end());
    if (adjacent != arr1.end())
        cout << "Adjacent element found with value: " << *adjacent << endl;
    else
        cout << "No adjacent elements found" << endl;
}

void test7(){
     cout << "\n=================================" << endl;

    // accumulate is from #include <numeric>
    array<int, 5> arr1{1,2,3,4,5};  //double{{}} is C++11
    
    int sum = accumulate(arr1.begin(), arr1.end(), 0);
    cout << "Sum of the elements in arr1 is: " << sum << endl;
}

void test8(){
    
    cout << "\n=================================" << endl;
    array<int, 10> arr1{1,2,3,1,2,3,3,3,3,3};  //double{{}} is C++11
    
    int count = std::count(arr1.begin(), arr1.end(), 3);
    cout << "Found 3: " << count << " times" << endl;
}

void test9(){
    
    cout << "\n=================================" << endl;
    array<int, 10> arr1{1,2,3,50,60,70,80,200,300,400};  //double{{}} is C++11
    
    int count = std::count_if(arr1.begin(), arr1.end(), [](int x){return x>10 && x<200;});
    
    cout << "Found " << count << " matches" << endl;
}


int main(){
    
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    // test7();
    // test8();
    test9();
    
    return 0;
}
