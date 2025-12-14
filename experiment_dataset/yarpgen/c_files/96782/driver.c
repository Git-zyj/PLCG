#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3219;
unsigned char var_2 = (unsigned char)217;
unsigned int var_13 = 3950336810U;
short var_14 = (short)-27198;
unsigned int var_17 = 30059495U;
int var_19 = -1923109850;
int zero = 0;
signed char var_20 = (signed char)10;
signed char var_21 = (signed char)25;
unsigned short var_22 = (unsigned short)47029;
unsigned char arr_4 [12] [12] ;
unsigned short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)31152;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
