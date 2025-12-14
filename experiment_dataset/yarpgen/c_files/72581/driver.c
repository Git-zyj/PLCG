#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
int var_3 = 412580526;
unsigned long long int var_6 = 12284287558893628985ULL;
unsigned short var_7 = (unsigned short)53902;
int var_8 = -1403760789;
unsigned int var_11 = 3429202552U;
unsigned int var_12 = 1824846184U;
unsigned char var_15 = (unsigned char)184;
int zero = 0;
unsigned short var_16 = (unsigned short)32620;
long long int var_17 = -2588380951394135462LL;
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
