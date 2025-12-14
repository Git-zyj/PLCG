#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2227907458U;
long long int var_4 = -6975888010343106771LL;
short var_5 = (short)-23100;
unsigned short var_6 = (unsigned short)50459;
short var_8 = (short)-28980;
long long int var_14 = 1119691979459839305LL;
int zero = 0;
long long int var_16 = 3563370794965552042LL;
unsigned int var_17 = 1963316771U;
long long int var_18 = 5602785735170411731LL;
unsigned short var_19 = (unsigned short)15417;
int var_20 = -666367706;
unsigned short arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)33465;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 10967266687124479765ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
