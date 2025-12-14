#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7032623207481754444LL;
long long int var_6 = -6798975214301670051LL;
unsigned char var_9 = (unsigned char)185;
int zero = 0;
unsigned long long int var_12 = 4516027988299387550ULL;
short var_13 = (short)-28406;
unsigned short var_14 = (unsigned short)17901;
long long int var_15 = -4671682281615135384LL;
unsigned long long int var_16 = 12377212911684182410ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
