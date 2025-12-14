#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
unsigned long long int var_1 = 2173292404832132936ULL;
unsigned short var_3 = (unsigned short)40693;
short var_4 = (short)-22663;
unsigned short var_5 = (unsigned short)4629;
unsigned short var_6 = (unsigned short)45373;
long long int var_7 = 1512724034451700189LL;
unsigned short var_8 = (unsigned short)54923;
signed char var_10 = (signed char)83;
int zero = 0;
long long int var_11 = 7285873696271186408LL;
unsigned long long int var_12 = 10187297778545661001ULL;
signed char var_13 = (signed char)124;
unsigned long long int var_14 = 14101880016917375737ULL;
int var_15 = -1251758358;
short arr_1 [18] ;
unsigned short arr_4 [18] ;
unsigned short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)28397;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)11346;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)40865;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
