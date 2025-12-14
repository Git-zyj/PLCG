#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 267504044U;
unsigned int var_5 = 3202633899U;
long long int var_8 = 1454093052198479047LL;
unsigned int var_10 = 3854927431U;
int zero = 0;
unsigned long long int var_14 = 5871508619267680218ULL;
unsigned int var_15 = 2438387872U;
unsigned long long int var_16 = 527301009898032359ULL;
unsigned int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 2683508652U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
