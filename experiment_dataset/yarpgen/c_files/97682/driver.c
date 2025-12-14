#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62805;
short var_2 = (short)19179;
short var_4 = (short)27677;
signed char var_8 = (signed char)88;
signed char var_9 = (signed char)-97;
unsigned short var_12 = (unsigned short)33714;
int zero = 0;
unsigned long long int var_14 = 18004905546253752839ULL;
signed char var_15 = (signed char)15;
short var_16 = (short)-28597;
unsigned long long int var_17 = 6431380474500034585ULL;
short var_18 = (short)28651;
signed char arr_0 [10] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)13033 : (short)-7557;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
