#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned int var_17 = 3300228330U;
short var_19 = (short)22440;
int zero = 0;
long long int var_20 = 2462982875930285453LL;
unsigned long long int var_21 = 6142979126784807218ULL;
unsigned int var_22 = 2035459088U;
void init() {
}

void checksum() {
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
