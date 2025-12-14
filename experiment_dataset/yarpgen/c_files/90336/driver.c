#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)46103;
unsigned long long int var_10 = 10392160195596437798ULL;
unsigned int var_13 = 3154558614U;
int zero = 0;
short var_15 = (short)-17743;
unsigned long long int var_16 = 9208106670627569586ULL;
void init() {
}

void checksum() {
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
