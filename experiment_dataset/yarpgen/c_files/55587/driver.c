#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3888890889U;
unsigned int var_5 = 3336649152U;
signed char var_7 = (signed char)-114;
long long int var_10 = -5028497484109991927LL;
int zero = 0;
unsigned int var_12 = 2711302743U;
long long int var_13 = 1439379703968340460LL;
long long int var_14 = 4685723726353300215LL;
void init() {
}

void checksum() {
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
