#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3986332691892815897LL;
short var_5 = (short)1208;
unsigned int var_6 = 100367632U;
unsigned long long int var_11 = 14412834974393705086ULL;
int zero = 0;
long long int var_12 = -2646309119101261428LL;
short var_13 = (short)-30455;
int var_14 = 909836132;
_Bool var_15 = (_Bool)0;
_Bool arr_0 [15] ;
unsigned int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 3804994815U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
