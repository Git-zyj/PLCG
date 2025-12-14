#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13254337829026986372ULL;
long long int var_17 = 8836702243678940308LL;
int zero = 0;
unsigned int var_18 = 2911282530U;
unsigned short var_19 = (unsigned short)37809;
unsigned int var_20 = 4219574408U;
signed char var_21 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
