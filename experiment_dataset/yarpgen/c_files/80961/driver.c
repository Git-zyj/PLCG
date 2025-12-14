#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9693621612268777303ULL;
unsigned char var_7 = (unsigned char)28;
unsigned char var_8 = (unsigned char)252;
signed char var_14 = (signed char)99;
int zero = 0;
unsigned char var_15 = (unsigned char)87;
signed char var_16 = (signed char)117;
unsigned char var_17 = (unsigned char)15;
unsigned char var_18 = (unsigned char)16;
unsigned int var_19 = 723391675U;
unsigned char var_20 = (unsigned char)239;
unsigned char var_21 = (unsigned char)14;
unsigned char var_22 = (unsigned char)8;
unsigned char var_23 = (unsigned char)19;
unsigned char var_24 = (unsigned char)83;
unsigned char arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)63 : (unsigned char)39;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
