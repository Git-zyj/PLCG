#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26656;
short var_1 = (short)-31572;
unsigned int var_5 = 348344866U;
unsigned long long int var_6 = 521636551566333130ULL;
int zero = 0;
unsigned int var_10 = 2414546629U;
signed char var_11 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
