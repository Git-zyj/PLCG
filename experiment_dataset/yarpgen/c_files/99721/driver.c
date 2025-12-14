#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2734377534205264706LL;
int var_9 = -1083535887;
unsigned int var_14 = 1103835077U;
int zero = 0;
unsigned long long int var_15 = 5970285167955393884ULL;
signed char var_16 = (signed char)35;
unsigned long long int var_17 = 947430803617215328ULL;
unsigned char var_18 = (unsigned char)37;
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
