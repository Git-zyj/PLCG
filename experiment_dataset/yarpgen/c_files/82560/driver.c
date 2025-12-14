#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16333;
unsigned int var_3 = 3681657467U;
unsigned long long int var_4 = 14660153635643980608ULL;
signed char var_7 = (signed char)100;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)45961;
signed char var_13 = (signed char)122;
int zero = 0;
unsigned short var_15 = (unsigned short)11722;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 409343462U;
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
