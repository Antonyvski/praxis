#include<iostream>
#include<random>
#include<vector>
#include<array>
const auto num_countries = 195;
void populate_vector( std::vector<unsigned int>& global_cases) {
    /*
    * Populate a vector with pseudo-random data generated using the mersenne
    * twister engine from <random>. The seed is set to 0 so that everyone
    * gets the same sequence of 'random' numbers.
    */

    auto seed = 0;
    auto min = 0;
    auto max = 100;

    // mt19337: a pseudo random generator using the mersenne 
    // twister engine ( from <random> )
    // The value of gen will be updated every time we access it.
    std::mt19937 gen(seed);
    // uniform_int_distribution: use the mersenne twister 
    // engine to generate a uniform random distribution over (min, max)
    std::uniform_int_distribution<unsigned int> unif_distrib(min, max);
}
int main(){
    int global_cases[num_countries];
    
}