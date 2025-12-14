#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1646309504271918383LL;
unsigned short var_6 = (unsigned short)41029;
int zero = 0;
unsigned char var_10 = (unsigned char)190;
signed char var_11 = (signed char)-36;
signed char var_12 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
