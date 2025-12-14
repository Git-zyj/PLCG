#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)30;
unsigned int var_8 = 3873974896U;
signed char var_10 = (signed char)-16;
unsigned char var_12 = (unsigned char)68;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)187;
int zero = 0;
unsigned char var_17 = (unsigned char)157;
unsigned long long int var_18 = 6669470347703950345ULL;
unsigned long long int var_19 = 16166525458807180585ULL;
unsigned char arr_0 [19] ;
_Bool arr_1 [19] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2910567552U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
