#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28380;
signed char var_10 = (signed char)-21;
signed char var_12 = (signed char)-13;
unsigned short var_13 = (unsigned short)29711;
short var_14 = (short)29973;
int zero = 0;
signed char var_15 = (signed char)-93;
unsigned short var_16 = (unsigned short)44076;
signed char var_17 = (signed char)31;
unsigned int var_18 = 4173792628U;
signed char var_19 = (signed char)-27;
unsigned int arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1959859570U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
