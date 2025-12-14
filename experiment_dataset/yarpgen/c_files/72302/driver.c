#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1478501493;
int var_1 = 341807954;
unsigned int var_5 = 3170984021U;
unsigned int var_6 = 3217378976U;
unsigned int var_7 = 3371248465U;
int var_8 = 1424744807;
int var_12 = 388436607;
int zero = 0;
int var_14 = -370133951;
unsigned int var_15 = 2706429722U;
void init() {
}

void checksum() {
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
