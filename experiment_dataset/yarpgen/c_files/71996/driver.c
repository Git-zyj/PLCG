#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_6 = 1846722743U;
unsigned long long int var_8 = 12724749138377369461ULL;
signed char var_11 = (signed char)120;
int zero = 0;
int var_14 = 998988308;
unsigned short var_15 = (unsigned short)31624;
short var_16 = (short)-2434;
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
