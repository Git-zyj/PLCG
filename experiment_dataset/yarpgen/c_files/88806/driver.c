#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3374730080U;
unsigned int var_2 = 3545506574U;
unsigned short var_6 = (unsigned short)58307;
int zero = 0;
long long int var_12 = -4173167848018723108LL;
unsigned short var_13 = (unsigned short)13285;
unsigned long long int var_14 = 1571108365664682263ULL;
long long int var_15 = 74661658428615460LL;
int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1390273099 : 1625475510;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
