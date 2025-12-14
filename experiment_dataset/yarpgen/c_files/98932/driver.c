#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1731808713U;
unsigned long long int var_3 = 10366157442179450332ULL;
unsigned short var_5 = (unsigned short)20621;
int zero = 0;
short var_19 = (short)-7476;
signed char var_20 = (signed char)-111;
void init() {
}

void checksum() {
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
