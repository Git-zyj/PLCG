#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12245;
unsigned char var_5 = (unsigned char)188;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)116;
unsigned long long int var_12 = 12379920083589892303ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 5206760519141268195ULL;
unsigned char var_15 = (unsigned char)84;
unsigned char var_16 = (unsigned char)0;
long long int var_17 = 1760543038799781780LL;
long long int var_18 = -4603425200219751362LL;
unsigned char var_19 = (unsigned char)226;
short var_20 = (short)32404;
short var_21 = (short)24836;
short arr_1 [12] [12] ;
unsigned short arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-15867;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)6479;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
