#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21967;
unsigned char var_3 = (unsigned char)128;
unsigned int var_4 = 1206512663U;
_Bool var_5 = (_Bool)1;
short var_6 = (short)1109;
long long int var_8 = -6528283210963650830LL;
int zero = 0;
unsigned long long int var_10 = 5083829623394629197ULL;
unsigned long long int var_11 = 8894366374932009727ULL;
unsigned long long int var_12 = 14312983139380418833ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned short arr_0 [23] ;
signed char arr_2 [23] [23] ;
unsigned char arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)705;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)206;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
