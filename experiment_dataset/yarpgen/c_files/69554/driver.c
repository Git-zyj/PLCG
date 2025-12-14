#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2142770491;
unsigned long long int var_13 = 10882748366796250783ULL;
int zero = 0;
long long int var_15 = -7096673550066491054LL;
int var_16 = 133215199;
unsigned int var_17 = 3196576319U;
signed char var_18 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
