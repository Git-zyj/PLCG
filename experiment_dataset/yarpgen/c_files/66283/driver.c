#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 182498290U;
int var_8 = -1458729392;
unsigned short var_13 = (unsigned short)26893;
int var_17 = 186464479;
int zero = 0;
int var_19 = 811585434;
unsigned short var_20 = (unsigned short)62501;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)30201;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
