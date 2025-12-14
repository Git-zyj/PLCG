#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61876;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)73;
unsigned long long int var_4 = 1127279332531016438ULL;
unsigned char var_5 = (unsigned char)163;
unsigned char var_6 = (unsigned char)119;
signed char var_7 = (signed char)-3;
unsigned char var_8 = (unsigned char)98;
int var_9 = -902815658;
int zero = 0;
unsigned char var_10 = (unsigned char)118;
unsigned char var_11 = (unsigned char)17;
unsigned long long int var_12 = 15866868210778252725ULL;
unsigned short var_13 = (unsigned short)34992;
int var_14 = -1906788641;
unsigned short var_15 = (unsigned short)27015;
_Bool arr_4 [23] ;
unsigned short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)8632;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
