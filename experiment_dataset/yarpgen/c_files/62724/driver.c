#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-96;
unsigned char var_9 = (unsigned char)158;
unsigned long long int var_17 = 7048783393623957714ULL;
int zero = 0;
signed char var_19 = (signed char)-119;
signed char var_20 = (signed char)-66;
long long int var_21 = -6441028970463458338LL;
void init() {
}

void checksum() {
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
