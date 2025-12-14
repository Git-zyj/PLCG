#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -5000162733267835331LL;
unsigned int var_12 = 1745042389U;
unsigned char var_17 = (unsigned char)145;
int zero = 0;
signed char var_18 = (signed char)66;
unsigned int var_19 = 1077613466U;
void init() {
}

void checksum() {
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
