#include "Classes.h"
#include <iostream>
#include <unistd.h>

using namespace std;

const int i = 34;
const int* someDoublePtr = &i;





int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n" << endl;
    const char * s = "this is some shitty shitterson";
    puts(s);
    
    printf("%i", someConstInt);  //I think, that compiler puts the value of someConstInt at
                                 //compile time
    
    
    using namespace std::chrono;
    std::chrono::milliseconds ms = duration_cast<milliseconds>(seconds(1));
    system_clock::time_point now = system_clock::now();
    // Code to measure
    auto start = high_resolution_clock::now();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    std::cout << "Time taken: " << duration.count() << " microseconds" << std::endl;
    
    
    for(int i=0; i<6; i++){
        std::cout << someDoublePtr << std::endl;
        usleep(10000);
    }
    
    return 0;
}
