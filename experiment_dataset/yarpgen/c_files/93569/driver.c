#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1759291417;
int var_8 = -1086350009;
unsigned long long int var_9 = 2772722633072582624ULL;
int zero = 0;
int var_15 = 1713300889;
unsigned long long int var_16 = 5019326968873962721ULL;
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
