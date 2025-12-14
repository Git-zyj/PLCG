#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4102864210U;
signed char var_2 = (signed char)-55;
unsigned char var_4 = (unsigned char)158;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 13606435553879733571ULL;
unsigned int var_8 = 2361055253U;
unsigned long long int var_10 = 9516298388354383630ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5016844938215365328ULL;
unsigned long long int var_16 = 3283987336720217530ULL;
unsigned short var_17 = (unsigned short)33760;
unsigned short var_18 = (unsigned short)31854;
int zero = 0;
unsigned long long int var_19 = 14839231471758738326ULL;
signed char var_20 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
