#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2083669856U;
signed char var_4 = (signed char)-83;
signed char var_5 = (signed char)-68;
long long int var_6 = -5160293261437465482LL;
int zero = 0;
long long int var_15 = 8708840501846278580LL;
long long int var_16 = -4604943172031133098LL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)74;
_Bool arr_0 [22] ;
unsigned int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3578030268U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
