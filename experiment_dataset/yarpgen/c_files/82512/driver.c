#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1776001467;
unsigned long long int var_9 = 6890278836512685892ULL;
unsigned int var_12 = 337554243U;
int zero = 0;
int var_13 = -2040035923;
long long int var_14 = -5916259544915871470LL;
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
