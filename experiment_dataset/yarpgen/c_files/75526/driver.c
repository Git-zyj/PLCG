#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4715354076214993295LL;
short var_6 = (short)4757;
short var_9 = (short)2113;
int zero = 0;
int var_12 = -2002644875;
unsigned char var_13 = (unsigned char)110;
unsigned long long int var_14 = 6144398713718634876ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
