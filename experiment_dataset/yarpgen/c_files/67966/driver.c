#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1376618197U;
unsigned short var_3 = (unsigned short)37975;
int var_4 = -1909626373;
unsigned long long int var_5 = 11214880278765035021ULL;
unsigned int var_12 = 1189790388U;
int zero = 0;
unsigned long long int var_16 = 10776956478655872573ULL;
short var_17 = (short)-18554;
_Bool var_18 = (_Bool)0;
_Bool arr_0 [25] [25] ;
short arr_1 [25] [25] ;
unsigned long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)19528;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 7456888882052453418ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
