#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_14 = -3956558201599224902LL;
long long int var_15 = 1551401595042696256LL;
unsigned char var_16 = (unsigned char)157;
int zero = 0;
signed char var_20 = (signed char)-104;
signed char var_21 = (signed char)6;
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
