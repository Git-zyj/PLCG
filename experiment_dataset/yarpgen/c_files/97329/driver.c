#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
signed char var_5 = (signed char)24;
unsigned char var_7 = (unsigned char)100;
unsigned char var_10 = (unsigned char)9;
int var_15 = 1998310898;
int zero = 0;
int var_19 = 1481825550;
unsigned char var_20 = (unsigned char)236;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2236456236U;
signed char var_23 = (signed char)-106;
_Bool var_24 = (_Bool)1;
int var_25 = 417700215;
signed char arr_0 [18] [18] ;
long long int arr_1 [18] ;
int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -8291485764663330865LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1016119555 : 792068451;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
