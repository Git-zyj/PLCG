#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1157316739;
unsigned int var_7 = 4143007029U;
unsigned char var_9 = (unsigned char)100;
int zero = 0;
unsigned long long int var_14 = 4512751068518189645ULL;
unsigned int var_15 = 1402868439U;
unsigned long long int var_16 = 14784536038447490339ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
