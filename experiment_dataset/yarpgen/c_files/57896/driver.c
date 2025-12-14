#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1709684221U;
unsigned char var_3 = (unsigned char)101;
signed char var_9 = (signed char)-48;
signed char var_10 = (signed char)-70;
signed char var_11 = (signed char)-17;
int zero = 0;
unsigned char var_14 = (unsigned char)179;
signed char var_15 = (signed char)-49;
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
