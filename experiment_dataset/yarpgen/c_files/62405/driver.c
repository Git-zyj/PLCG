#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 712389210U;
unsigned long long int var_6 = 9095557530199270885ULL;
signed char var_8 = (signed char)95;
unsigned short var_10 = (unsigned short)35962;
unsigned long long int var_12 = 16824237489173852200ULL;
unsigned short var_16 = (unsigned short)23699;
int zero = 0;
unsigned char var_18 = (unsigned char)63;
short var_19 = (short)-4659;
signed char var_20 = (signed char)-12;
unsigned short var_21 = (unsigned short)22129;
unsigned short var_22 = (unsigned short)44350;
short var_23 = (short)31741;
short arr_0 [18] ;
short arr_1 [18] ;
short arr_2 [18] ;
long long int arr_5 [18] ;
unsigned long long int arr_3 [18] [18] ;
signed char arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)12677;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-8127;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)5749;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1003124415210268918LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 12002499291835358338ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-102 : (signed char)-13;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
