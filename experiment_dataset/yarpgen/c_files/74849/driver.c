#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7407488851940242748ULL;
int var_3 = -695485809;
unsigned short var_4 = (unsigned short)7721;
unsigned int var_11 = 403894088U;
int zero = 0;
unsigned short var_20 = (unsigned short)22233;
signed char var_21 = (signed char)0;
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
