#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -590800266;
unsigned long long int var_4 = 7205401318069043754ULL;
long long int var_7 = -5695568339789615098LL;
int var_8 = -218356922;
unsigned char var_9 = (unsigned char)242;
long long int var_12 = 5209534460426878392LL;
int var_13 = 1294382349;
unsigned char var_14 = (unsigned char)237;
int zero = 0;
signed char var_15 = (signed char)94;
long long int var_16 = -7552296230792950391LL;
void init() {
}

void checksum() {
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
