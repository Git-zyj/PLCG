#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2970120284U;
unsigned short var_7 = (unsigned short)22227;
unsigned short var_12 = (unsigned short)55156;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4049828462286886399ULL;
short var_17 = (short)-30525;
unsigned short var_18 = (unsigned short)18939;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
