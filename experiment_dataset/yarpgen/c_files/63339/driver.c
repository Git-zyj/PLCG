#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4075571952999153824LL;
int var_2 = -1189872441;
long long int var_4 = 609981977277393732LL;
short var_5 = (short)-28529;
_Bool var_6 = (_Bool)0;
short var_7 = (short)3402;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)68;
short var_13 = (short)-20017;
unsigned long long int var_14 = 5034119473407012924ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 114040839U;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1907990395;
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
