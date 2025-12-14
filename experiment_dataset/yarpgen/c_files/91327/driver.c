#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3058900433U;
int var_5 = -501179882;
short var_8 = (short)30480;
long long int var_9 = -7146708405672030033LL;
long long int var_10 = -5742523936103434714LL;
int zero = 0;
int var_13 = 1510801506;
int var_14 = 1979035326;
unsigned short var_15 = (unsigned short)39193;
short var_16 = (short)-26629;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
