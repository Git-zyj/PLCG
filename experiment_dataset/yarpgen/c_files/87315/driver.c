#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5821534912686204888ULL;
signed char var_2 = (signed char)0;
short var_3 = (short)-19221;
_Bool var_6 = (_Bool)1;
short var_9 = (short)16007;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-8;
signed char var_14 = (signed char)51;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4801308234377471971ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
