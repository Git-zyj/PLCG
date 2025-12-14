#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
int var_8 = -1965351048;
unsigned int var_12 = 2161897234U;
long long int var_16 = 7618271100875194323LL;
int zero = 0;
unsigned char var_20 = (unsigned char)110;
long long int var_21 = -3006937794239734485LL;
void init() {
}

void checksum() {
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
