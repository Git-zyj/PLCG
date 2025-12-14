#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 813191096U;
signed char var_14 = (signed char)97;
int zero = 0;
unsigned char var_20 = (unsigned char)8;
unsigned long long int var_21 = 12308404853835716672ULL;
short var_22 = (short)-19084;
short var_23 = (short)-13615;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
