#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14572265310823852696ULL;
unsigned long long int var_12 = 683213452566296434ULL;
long long int var_13 = 882253505982065408LL;
unsigned char var_16 = (unsigned char)173;
unsigned char var_17 = (unsigned char)87;
int zero = 0;
unsigned int var_18 = 3822612646U;
int var_19 = -865065499;
unsigned char var_20 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
