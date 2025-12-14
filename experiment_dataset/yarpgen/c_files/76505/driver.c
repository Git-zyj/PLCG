#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 12146297883760593255ULL;
int var_3 = -2091047746;
unsigned short var_5 = (unsigned short)17219;
signed char var_6 = (signed char)96;
unsigned int var_9 = 2783114131U;
int zero = 0;
unsigned long long int var_10 = 682647508243680567ULL;
unsigned char var_11 = (unsigned char)140;
_Bool var_12 = (_Bool)1;
long long int var_13 = 8457468322623132421LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
