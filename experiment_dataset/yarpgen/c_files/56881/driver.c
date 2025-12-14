#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-93;
int var_6 = -1664967721;
unsigned long long int var_7 = 1690898653477228499ULL;
unsigned int var_10 = 4163551781U;
unsigned short var_11 = (unsigned short)16455;
int zero = 0;
short var_13 = (short)-19921;
int var_14 = -854758401;
void init() {
}

void checksum() {
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
