#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)21;
short var_4 = (short)1208;
unsigned char var_6 = (unsigned char)237;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)183;
signed char var_13 = (signed char)-45;
long long int var_14 = -3399617736252610618LL;
unsigned short var_15 = (unsigned short)41028;
unsigned short var_16 = (unsigned short)55248;
long long int var_17 = 5323231054975915160LL;
int zero = 0;
signed char var_20 = (signed char)-40;
short var_21 = (short)-10279;
unsigned short var_22 = (unsigned short)24256;
int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -2098700366 : -1539800366;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
