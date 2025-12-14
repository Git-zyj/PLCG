#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3616055379257165164ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_8 = 1269590688735581431LL;
short var_11 = (short)23497;
signed char var_15 = (signed char)-6;
int zero = 0;
short var_17 = (short)-16667;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
