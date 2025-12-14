#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4157030730U;
int var_3 = 1701839357;
short var_10 = (short)-11140;
unsigned short var_12 = (unsigned short)14067;
int zero = 0;
short var_14 = (short)-16869;
short var_15 = (short)5097;
long long int var_16 = 77839074988898371LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
