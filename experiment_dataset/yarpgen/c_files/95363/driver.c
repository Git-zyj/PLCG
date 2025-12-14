#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)69;
signed char var_10 = (signed char)6;
unsigned int var_12 = 1858563025U;
int zero = 0;
unsigned char var_15 = (unsigned char)62;
unsigned int var_16 = 431068869U;
unsigned long long int var_17 = 2757715373526320020ULL;
unsigned char var_18 = (unsigned char)72;
unsigned int var_19 = 3244606533U;
unsigned char var_20 = (unsigned char)148;
unsigned long long int var_21 = 13647478880583508641ULL;
unsigned char arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)84;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
