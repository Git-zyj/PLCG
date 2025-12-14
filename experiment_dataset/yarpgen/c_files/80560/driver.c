#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2121991805;
unsigned long long int var_5 = 9966586656715938513ULL;
short var_6 = (short)-31144;
int var_8 = -1050610547;
int var_10 = 2026853955;
int zero = 0;
unsigned short var_13 = (unsigned short)12207;
long long int var_14 = -3339980738655347406LL;
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
