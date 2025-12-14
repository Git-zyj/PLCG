#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32475;
short var_3 = (short)-16115;
short var_5 = (short)-31650;
int var_9 = -740627018;
long long int var_10 = 5188080564038707661LL;
int zero = 0;
long long int var_14 = 7978464955479214190LL;
long long int var_15 = -2783174000236382786LL;
unsigned long long int var_16 = 11830025536322585371ULL;
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
