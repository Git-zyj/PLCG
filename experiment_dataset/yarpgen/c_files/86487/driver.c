#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
long long int var_2 = -1855393371179730002LL;
int var_3 = -1235247142;
unsigned short var_7 = (unsigned short)44324;
int zero = 0;
unsigned int var_10 = 3250512728U;
unsigned int var_11 = 1029224779U;
short var_12 = (short)-14730;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
