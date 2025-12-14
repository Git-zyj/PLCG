#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57443;
unsigned int var_4 = 996647773U;
unsigned long long int var_12 = 8084019921994101621ULL;
int zero = 0;
unsigned long long int var_15 = 6809671966581457031ULL;
int var_16 = -1520225475;
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
