#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -896739536572719554LL;
unsigned int var_2 = 2044339941U;
unsigned short var_7 = (unsigned short)5008;
int zero = 0;
unsigned int var_11 = 1833164801U;
unsigned char var_12 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
