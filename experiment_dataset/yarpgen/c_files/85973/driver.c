#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2983163173644829681ULL;
unsigned long long int var_2 = 5629792516596595125ULL;
signed char var_5 = (signed char)48;
unsigned short var_17 = (unsigned short)26857;
int zero = 0;
long long int var_18 = 667943578786220645LL;
long long int var_19 = 8762599458486643661LL;
short var_20 = (short)-9628;
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
