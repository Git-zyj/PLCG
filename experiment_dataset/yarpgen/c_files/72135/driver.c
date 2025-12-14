#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28752;
unsigned short var_3 = (unsigned short)17174;
long long int var_4 = 6001685573605903130LL;
short var_7 = (short)30939;
unsigned int var_9 = 2473272505U;
short var_10 = (short)-21719;
int zero = 0;
unsigned char var_11 = (unsigned char)193;
signed char var_12 = (signed char)127;
signed char var_13 = (signed char)-29;
int var_14 = -2078364940;
unsigned char var_15 = (unsigned char)197;
signed char var_16 = (signed char)14;
unsigned char var_17 = (unsigned char)127;
int var_18 = 262097222;
signed char var_19 = (signed char)-64;
signed char var_20 = (signed char)30;
unsigned char arr_0 [23] ;
unsigned char arr_1 [23] ;
short arr_7 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)9211 : (short)-11494;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
