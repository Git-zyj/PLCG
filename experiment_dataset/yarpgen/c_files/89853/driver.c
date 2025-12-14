#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6937049210266828678ULL;
unsigned char var_4 = (unsigned char)200;
unsigned long long int var_5 = 1901072467027016417ULL;
unsigned long long int var_6 = 10304231369799108007ULL;
unsigned long long int var_8 = 1095987987563631004ULL;
unsigned short var_13 = (unsigned short)38049;
unsigned long long int var_16 = 9966457432522790376ULL;
int zero = 0;
unsigned long long int var_17 = 12438171859800298257ULL;
unsigned short var_18 = (unsigned short)58014;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
