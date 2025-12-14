#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)151;
unsigned short var_6 = (unsigned short)50344;
short var_9 = (short)3140;
unsigned int var_10 = 782641082U;
unsigned char var_11 = (unsigned char)251;
unsigned int var_12 = 1765910906U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7220383504977019185ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
