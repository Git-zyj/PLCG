#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3874987977U;
unsigned char var_9 = (unsigned char)32;
short var_15 = (short)15413;
int zero = 0;
short var_16 = (short)27887;
long long int var_17 = -2088410658712691503LL;
signed char var_18 = (signed char)88;
long long int var_19 = -4253278908634967739LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
