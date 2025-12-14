#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14478019132376274096ULL;
unsigned char var_11 = (unsigned char)50;
int zero = 0;
long long int var_19 = 6349554620342633685LL;
unsigned int var_20 = 1961673769U;
unsigned int var_21 = 1631429373U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
