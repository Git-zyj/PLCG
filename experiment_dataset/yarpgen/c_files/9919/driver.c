#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_8 = (short)26460;
unsigned long long int var_10 = 12829102375868300467ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5313372457372565542ULL;
short var_15 = (short)7013;
void init() {
}

void checksum() {
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
