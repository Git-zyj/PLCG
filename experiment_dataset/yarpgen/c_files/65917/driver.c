#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
signed char var_7 = (signed char)-30;
unsigned short var_14 = (unsigned short)34577;
int zero = 0;
unsigned short var_17 = (unsigned short)56380;
unsigned int var_18 = 1398015239U;
unsigned long long int var_19 = 9277382423781509753ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
