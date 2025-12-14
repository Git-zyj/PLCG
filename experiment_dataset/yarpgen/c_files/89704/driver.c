#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)107;
signed char var_7 = (signed char)76;
signed char var_12 = (signed char)4;
signed char var_13 = (signed char)83;
int zero = 0;
signed char var_15 = (signed char)47;
signed char var_16 = (signed char)-10;
signed char var_17 = (signed char)95;
signed char var_18 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
