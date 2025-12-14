#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1239318406;
short var_8 = (short)3949;
int zero = 0;
unsigned short var_19 = (unsigned short)34580;
int var_20 = 643020772;
unsigned long long int var_21 = 3485590447133680443ULL;
unsigned short var_22 = (unsigned short)5142;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
