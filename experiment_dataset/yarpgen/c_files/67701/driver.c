#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1991676413U;
long long int var_11 = -10011930208130480LL;
unsigned long long int var_14 = 14768174138388231713ULL;
signed char var_15 = (signed char)52;
unsigned int var_18 = 1436253510U;
int zero = 0;
signed char var_20 = (signed char)81;
signed char var_21 = (signed char)25;
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
