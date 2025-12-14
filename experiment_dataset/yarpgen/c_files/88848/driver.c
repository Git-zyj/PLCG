#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)29946;
long long int var_5 = 8172301847278989375LL;
long long int var_9 = 3186933767058834212LL;
unsigned char var_10 = (unsigned char)29;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
long long int var_14 = 8424301280444243646LL;
long long int var_15 = -7382977653903361274LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)87;
long long int arr_0 [25] ;
_Bool arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -8573629143985528851LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
