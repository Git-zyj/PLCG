#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33505;
signed char var_1 = (signed char)7;
signed char var_2 = (signed char)-74;
long long int var_3 = 5038784999788900108LL;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)44950;
signed char var_8 = (signed char)80;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-40;
long long int var_11 = 6052087587118981836LL;
long long int var_12 = 2766190846626420663LL;
int zero = 0;
unsigned int var_13 = 3624428171U;
signed char var_14 = (signed char)48;
unsigned short var_15 = (unsigned short)47553;
_Bool arr_0 [15] [15] ;
unsigned short arr_3 [15] ;
unsigned char arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)50325;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)165;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
