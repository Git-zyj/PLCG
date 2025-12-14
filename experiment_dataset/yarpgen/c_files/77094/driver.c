#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)3;
unsigned int var_6 = 2675120537U;
_Bool var_9 = (_Bool)0;
short var_14 = (short)-13964;
long long int var_15 = 2412014829329464107LL;
int zero = 0;
long long int var_17 = -6827630398645452186LL;
long long int var_18 = 7674515995829812142LL;
signed char var_19 = (signed char)46;
unsigned char var_20 = (unsigned char)217;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned short arr_2 [19] [19] ;
signed char arr_3 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)31842;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)81;
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
