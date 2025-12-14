#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
unsigned int var_4 = 3000705250U;
long long int var_5 = -272798451436354493LL;
unsigned long long int var_6 = 8434860082628289471ULL;
short var_7 = (short)-18071;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)56004;
int zero = 0;
unsigned short var_10 = (unsigned short)53681;
short var_11 = (short)-29232;
unsigned char var_12 = (unsigned char)158;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 639991742U;
unsigned int var_15 = 3215029906U;
_Bool var_16 = (_Bool)1;
long long int var_17 = 5389520024457046016LL;
_Bool var_18 = (_Bool)0;
unsigned char arr_1 [21] [21] ;
_Bool arr_2 [21] ;
unsigned long long int arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 15952674629270152015ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
