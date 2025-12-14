#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61495;
unsigned short var_1 = (unsigned short)14419;
unsigned short var_2 = (unsigned short)37310;
unsigned short var_3 = (unsigned short)42266;
unsigned short var_4 = (unsigned short)25713;
signed char var_5 = (signed char)31;
int var_6 = 902163506;
int zero = 0;
signed char var_10 = (signed char)5;
unsigned short var_11 = (unsigned short)38663;
unsigned long long int var_12 = 13573192209052487018ULL;
short var_13 = (short)-25292;
unsigned short var_14 = (unsigned short)45947;
unsigned short var_15 = (unsigned short)38722;
int var_16 = -850102043;
signed char var_17 = (signed char)-7;
unsigned short var_18 = (unsigned short)55788;
unsigned short var_19 = (unsigned short)30565;
int var_20 = 1479647028;
unsigned long long int var_21 = 6954943607831883479ULL;
short var_22 = (short)21123;
signed char arr_24 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)49;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
