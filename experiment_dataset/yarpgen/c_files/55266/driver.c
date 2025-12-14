#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-61;
unsigned int var_2 = 3076270001U;
unsigned short var_5 = (unsigned short)63239;
long long int var_9 = 4096532213958640656LL;
unsigned long long int var_11 = 11777296955131132381ULL;
int zero = 0;
unsigned long long int var_19 = 4663532739597845484ULL;
unsigned char var_20 = (unsigned char)114;
unsigned char var_21 = (unsigned char)43;
int var_22 = -2018300484;
unsigned short var_23 = (unsigned short)37107;
unsigned short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30331 : (unsigned short)59235;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
