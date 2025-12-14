#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
signed char var_3 = (signed char)57;
unsigned int var_6 = 3767127021U;
signed char var_8 = (signed char)(-127 - 1);
unsigned int var_9 = 280109016U;
unsigned int var_11 = 3066282592U;
unsigned int var_12 = 1699659789U;
unsigned int var_15 = 2909491445U;
unsigned short var_16 = (unsigned short)12706;
long long int var_18 = -1244537132575458392LL;
int zero = 0;
unsigned short var_19 = (unsigned short)64448;
signed char var_20 = (signed char)-7;
unsigned long long int var_21 = 9184840026311971459ULL;
unsigned int arr_1 [16] ;
signed char arr_3 [16] [16] ;
unsigned long long int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3294590578U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 15007668099435013413ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
