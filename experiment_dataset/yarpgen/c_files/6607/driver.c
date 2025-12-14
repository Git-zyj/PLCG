#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11693333770750521581ULL;
short var_10 = (short)30796;
unsigned char var_12 = (unsigned char)144;
int zero = 0;
unsigned char var_14 = (unsigned char)95;
unsigned long long int var_15 = 18238538132715057339ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
