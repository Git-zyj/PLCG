#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45924;
long long int var_2 = -5259095367736133791LL;
unsigned int var_9 = 2920840947U;
unsigned int var_11 = 4259375748U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3151196423542871004ULL;
short var_22 = (short)18811;
int var_23 = 1163374338;
short var_24 = (short)-26994;
int var_25 = 527202641;
unsigned int arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2816331185U;
}

void checksum() {
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
