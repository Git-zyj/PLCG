#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57126;
short var_8 = (short)8391;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6359766558250349619ULL;
unsigned char var_19 = (unsigned char)139;
unsigned long long int var_20 = 852712395656481659ULL;
short var_21 = (short)-17504;
short var_22 = (short)-561;
unsigned short arr_0 [20] ;
signed char arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)45365;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-107;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
