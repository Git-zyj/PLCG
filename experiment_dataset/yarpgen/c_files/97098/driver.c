#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)225;
unsigned long long int var_7 = 9547992193495747994ULL;
unsigned char var_8 = (unsigned char)6;
short var_11 = (short)-25434;
int zero = 0;
int var_17 = 1967900148;
unsigned char var_18 = (unsigned char)171;
unsigned int var_19 = 3844012942U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
