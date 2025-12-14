#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
signed char var_5 = (signed char)22;
signed char var_8 = (signed char)-117;
signed char var_9 = (signed char)24;
signed char var_10 = (signed char)50;
int zero = 0;
int var_15 = -347982709;
int var_16 = -418175126;
signed char var_17 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
