#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3253408753U;
unsigned long long int var_5 = 16847669298207246645ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-61;
unsigned int var_12 = 194026910U;
unsigned long long int var_13 = 2598635885496049266ULL;
int var_14 = -940415348;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
