#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 8570852918052191492LL;
unsigned short var_6 = (unsigned short)13316;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)218;
short var_14 = (short)5855;
int zero = 0;
long long int var_16 = 8935186329012719986LL;
unsigned short var_17 = (unsigned short)5141;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
