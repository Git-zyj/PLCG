#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3744079792U;
unsigned int var_1 = 2541936405U;
int var_3 = 619322490;
unsigned long long int var_7 = 377446011713431780ULL;
int var_8 = 926886378;
unsigned int var_11 = 2945559278U;
long long int var_12 = 8884408232325755768LL;
unsigned char var_13 = (unsigned char)248;
unsigned long long int var_14 = 7789593293705141550ULL;
signed char var_15 = (signed char)62;
int zero = 0;
unsigned short var_17 = (unsigned short)48705;
unsigned char var_18 = (unsigned char)6;
long long int var_19 = -8163116557330513088LL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2999748943986194926ULL;
unsigned char var_22 = (unsigned char)179;
long long int var_23 = 3356453111853199586LL;
signed char var_24 = (signed char)67;
int var_25 = 1761437882;
short var_26 = (short)-5529;
unsigned long long int arr_1 [13] ;
unsigned long long int arr_2 [13] ;
int arr_6 [13] [13] [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 12300172872615864306ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 8545133775047608959ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1969430374 : 1759699562;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 7514693892880014312ULL : 13974562268355172203ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
