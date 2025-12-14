#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 158493651;
unsigned int var_11 = 1561441305U;
unsigned long long int var_12 = 16863725583524432065ULL;
unsigned short var_13 = (unsigned short)38591;
int zero = 0;
unsigned long long int var_14 = 16340373975564118040ULL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)24106;
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
