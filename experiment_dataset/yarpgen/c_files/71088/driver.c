#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3355436224U;
signed char var_14 = (signed char)126;
int zero = 0;
int var_20 = 1372324435;
long long int var_21 = 8514935731938764702LL;
unsigned short var_22 = (unsigned short)30319;
unsigned char var_23 = (unsigned char)140;
short var_24 = (short)22753;
int var_25 = -846968955;
long long int var_26 = -2242192543365074550LL;
int var_27 = 2108282284;
short var_28 = (short)-7942;
short var_29 = (short)-5480;
unsigned char var_30 = (unsigned char)62;
unsigned short var_31 = (unsigned short)13617;
int var_32 = -1674542288;
long long int var_33 = 7108648560068838315LL;
int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 724101709;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
