#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14683;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-31970;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-471;
unsigned long long int var_11 = 7238930368681727676ULL;
int zero = 0;
int var_14 = 2029912738;
signed char var_15 = (signed char)-9;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
