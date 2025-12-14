#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53660;
unsigned int var_1 = 2148615715U;
short var_6 = (short)-23938;
short var_7 = (short)25632;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_17 = 1441289401950233311LL;
unsigned short var_18 = (unsigned short)29553;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
