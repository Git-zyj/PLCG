#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)95;
int var_3 = 106626791;
unsigned char var_11 = (unsigned char)24;
unsigned int var_12 = 1122259738U;
int zero = 0;
unsigned char var_19 = (unsigned char)152;
unsigned long long int var_20 = 13799027493491236176ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
