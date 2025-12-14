#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 336492891U;
int var_7 = -775736630;
int zero = 0;
int var_10 = -466418984;
long long int var_11 = -3062487929257964777LL;
long long int var_12 = 5391887496511494642LL;
signed char var_13 = (signed char)86;
signed char var_14 = (signed char)-25;
_Bool var_15 = (_Bool)1;
int var_16 = -256184560;
unsigned long long int var_17 = 8060441014092969929ULL;
short arr_0 [16] ;
signed char arr_2 [16] ;
unsigned int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-24414 : (short)16327;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-6 : (signed char)87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 628468265U : 3118621019U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
