#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7074;
unsigned int var_6 = 1094720386U;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2828365920U;
int zero = 0;
short var_11 = (short)-31376;
unsigned int var_12 = 3307093047U;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
