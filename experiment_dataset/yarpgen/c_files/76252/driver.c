#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -192151730;
int var_6 = 101229950;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)230;
int var_14 = 1150415536;
int zero = 0;
unsigned short var_18 = (unsigned short)50041;
_Bool var_19 = (_Bool)1;
int var_20 = 1587162912;
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
