#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10144531435210712184ULL;
unsigned short var_10 = (unsigned short)48829;
long long int var_14 = 5210060359683662969LL;
int zero = 0;
int var_19 = -1636292131;
short var_20 = (short)-19206;
short var_21 = (short)608;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
