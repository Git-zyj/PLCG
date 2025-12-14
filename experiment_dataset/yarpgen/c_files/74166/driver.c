#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)88;
unsigned int var_8 = 3622115155U;
signed char var_9 = (signed char)-112;
unsigned char var_11 = (unsigned char)209;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)34;
unsigned char var_15 = (unsigned char)176;
unsigned char var_16 = (unsigned char)244;
signed char var_17 = (signed char)26;
_Bool var_18 = (_Bool)0;
int var_19 = 648135912;
unsigned long long int var_20 = 7359910840514770388ULL;
_Bool arr_0 [16] ;
short arr_4 [16] ;
_Bool arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-21582;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
