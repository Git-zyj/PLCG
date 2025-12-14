#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)7541;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-24;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -5177776435066835425LL;
unsigned long long int var_16 = 6640700644555847044ULL;
signed char var_17 = (signed char)-87;
int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 524313484;
}

void checksum() {
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
