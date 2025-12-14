#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_8 = (unsigned short)10619;
signed char var_9 = (signed char)75;
unsigned short var_10 = (unsigned short)25171;
int zero = 0;
short var_11 = (short)27323;
unsigned int var_12 = 352299390U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)16;
unsigned long long int var_15 = 9491586279556714385ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
