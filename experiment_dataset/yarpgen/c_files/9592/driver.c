#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
unsigned long long int var_2 = 1054285014320477998ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-20595;
unsigned int var_7 = 1750041535U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)15687;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 30032934U;
unsigned long long int var_18 = 2932397779929499996ULL;
int zero = 0;
unsigned long long int var_20 = 7266880489044528982ULL;
unsigned char var_21 = (unsigned char)48;
_Bool var_22 = (_Bool)0;
short arr_0 [24] ;
_Bool arr_1 [24] ;
_Bool arr_2 [24] ;
signed char arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)32079;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-14;
}

void checksum() {
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
