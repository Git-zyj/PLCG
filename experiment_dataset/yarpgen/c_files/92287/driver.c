#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)30072;
int var_7 = -1778951814;
unsigned char var_10 = (unsigned char)147;
int var_17 = 1648518053;
int zero = 0;
int var_20 = 636743256;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2340078984U;
unsigned long long int var_23 = 1569828432230893788ULL;
unsigned char arr_7 [12] [12] ;
unsigned short arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)68 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned short)20692;
}

void checksum() {
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
