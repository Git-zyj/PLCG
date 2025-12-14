#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 370388707U;
long long int var_2 = -6801259345643158792LL;
unsigned short var_3 = (unsigned short)22626;
short var_5 = (short)-12912;
short var_9 = (short)-29479;
signed char var_10 = (signed char)126;
int var_11 = 207513459;
signed char var_12 = (signed char)83;
signed char var_13 = (signed char)-84;
long long int var_18 = -3993875060792798682LL;
int zero = 0;
int var_19 = 1735528652;
unsigned char var_20 = (unsigned char)124;
int var_21 = 426642056;
unsigned int var_22 = 2028881076U;
long long int var_23 = 1346907863863545792LL;
long long int var_24 = 3081896751723996345LL;
int arr_0 [19] ;
signed char arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 516980354;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)28;
}

void checksum() {
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
