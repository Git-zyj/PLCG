#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19733;
unsigned int var_7 = 493209959U;
unsigned int var_13 = 3631680140U;
signed char var_14 = (signed char)-40;
_Bool var_15 = (_Bool)1;
unsigned int var_17 = 2077519162U;
int zero = 0;
long long int var_19 = 874134191541187874LL;
signed char var_20 = (signed char)96;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)137;
unsigned int var_23 = 2870594468U;
unsigned int arr_1 [21] [21] ;
unsigned long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 3308624422U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 602232803369079415ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
