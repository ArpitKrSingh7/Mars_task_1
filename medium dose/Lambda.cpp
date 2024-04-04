#include <iostream>

#include <functional>

using namespace std;

typedef struct Mars

{

    string rover_name;

    int rover_weight; // IN KGs

    string rover_color;

} Mars;

int main()

{

    Mars rover = {"Manglu", 60, "white"};

    std::invoke([&rover]
                { 
        cout << rover.rover_name << endl;

        cout << rover.rover_weight <<" Kg"<< endl;

        cout << rover.rover_color << endl;
       return; });
}
