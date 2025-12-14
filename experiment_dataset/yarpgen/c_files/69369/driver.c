#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)22991;
short var_6 = (short)20285;
unsigned long long int var_12 = 6656740337045371076ULL;
unsigned long long int var_14 = 1018300601956617891ULL;
unsigned long long int var_15 = 5697684766875619064ULL;
short var_17 = (short)22008;
long long int var_18 = -2702432598237173730LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)100;
unsigned char var_21 = (unsigned char)9;
int var_22 = 400936166;
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
