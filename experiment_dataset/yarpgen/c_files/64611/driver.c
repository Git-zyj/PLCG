#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1741530021U;
signed char var_2 = (signed char)-98;
signed char var_8 = (signed char)-75;
short var_10 = (short)5074;
unsigned char var_13 = (unsigned char)12;
unsigned int var_17 = 2377550993U;
unsigned char var_18 = (unsigned char)200;
int zero = 0;
int var_19 = -462662392;
short var_20 = (short)17177;
unsigned char var_21 = (unsigned char)102;
int var_22 = -2033209461;
signed char var_23 = (signed char)82;
unsigned char arr_4 [15] ;
signed char arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)188 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)86 : (signed char)-100;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
