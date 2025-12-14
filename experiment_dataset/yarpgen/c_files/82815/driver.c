#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1977875362;
unsigned int var_5 = 1693940112U;
short var_6 = (short)-10896;
int var_8 = -1353700287;
int var_10 = -1672659084;
int zero = 0;
unsigned int var_11 = 3212806665U;
_Bool var_12 = (_Bool)0;
int var_13 = 295807423;
unsigned int var_14 = 3280910680U;
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
