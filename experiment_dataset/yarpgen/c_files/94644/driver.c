#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)6;
signed char var_12 = (signed char)-70;
int var_15 = 1587020776;
unsigned int var_18 = 2445107939U;
int zero = 0;
signed char var_20 = (signed char)76;
unsigned long long int var_21 = 17613725650837097261ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
