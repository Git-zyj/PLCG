#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
signed char var_2 = (signed char)113;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)63256;
short var_11 = (short)21821;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)10762;
unsigned long long int var_17 = 11950417566495472856ULL;
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
