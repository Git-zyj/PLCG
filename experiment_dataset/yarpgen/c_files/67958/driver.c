#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2609403544892037985ULL;
signed char var_14 = (signed char)-97;
int zero = 0;
long long int var_20 = -6141958668602878561LL;
unsigned char var_21 = (unsigned char)232;
signed char var_22 = (signed char)-115;
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
