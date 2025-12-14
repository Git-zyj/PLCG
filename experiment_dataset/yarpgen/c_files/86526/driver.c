#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49479;
unsigned int var_3 = 798007112U;
unsigned int var_6 = 707282407U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4194583423U;
short var_13 = (short)-8850;
int var_14 = -575236009;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
