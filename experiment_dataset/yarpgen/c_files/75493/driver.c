#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-21;
unsigned int var_9 = 1753760655U;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)74;
int zero = 0;
unsigned int var_14 = 1391247102U;
unsigned int var_15 = 441692403U;
signed char var_16 = (signed char)122;
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
