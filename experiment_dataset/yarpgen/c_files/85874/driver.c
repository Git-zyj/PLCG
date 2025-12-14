#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 262747957;
int var_2 = 1083041013;
short var_4 = (short)-26519;
long long int var_8 = 2177389918172663600LL;
unsigned char var_9 = (unsigned char)109;
unsigned char var_10 = (unsigned char)113;
int zero = 0;
unsigned char var_12 = (unsigned char)35;
int var_13 = -1781409403;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)20472;
unsigned int var_16 = 1057031201U;
signed char var_17 = (signed char)-19;
int var_18 = -2124034093;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1392727618U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
