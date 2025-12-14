#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16228449386195550088ULL;
unsigned long long int var_1 = 9772105467954482237ULL;
int var_2 = 1455828635;
unsigned short var_5 = (unsigned short)7379;
unsigned short var_8 = (unsigned short)37449;
short var_11 = (short)27326;
int zero = 0;
unsigned long long int var_12 = 13156926492386052035ULL;
short var_13 = (short)-27331;
signed char var_14 = (signed char)-28;
unsigned long long int var_15 = 4199852572392285415ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
