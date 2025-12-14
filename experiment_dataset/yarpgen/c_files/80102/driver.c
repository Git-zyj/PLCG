#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-17022;
signed char var_7 = (signed char)52;
signed char var_9 = (signed char)31;
int zero = 0;
short var_15 = (short)29931;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)163;
unsigned short var_18 = (unsigned short)47377;
int arr_1 [21] ;
int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -518206667;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -61909093;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
