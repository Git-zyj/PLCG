#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10520635220553218710ULL;
unsigned int var_8 = 2065568315U;
unsigned int var_10 = 1032466418U;
int zero = 0;
signed char var_17 = (signed char)47;
short var_18 = (short)-3806;
void init() {
}

void checksum() {
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
