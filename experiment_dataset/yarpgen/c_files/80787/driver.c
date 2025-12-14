#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2039129593;
int var_1 = 39982448;
int var_2 = -513421756;
short var_5 = (short)-26159;
int var_6 = -1660705412;
int var_8 = 510605210;
int var_9 = 1297614892;
int var_10 = 324214647;
int zero = 0;
short var_12 = (short)-14558;
int var_13 = 20442954;
void init() {
}

void checksum() {
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
