#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1315992872U;
unsigned int var_6 = 2855036213U;
unsigned int var_7 = 3437011976U;
unsigned int var_8 = 3398311036U;
unsigned int var_9 = 2989866999U;
int zero = 0;
unsigned int var_11 = 3914528580U;
unsigned int var_12 = 4184887035U;
unsigned int var_13 = 3718000451U;
unsigned int arr_0 [10] ;
unsigned int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2413155821U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1669044161U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
