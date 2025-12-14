#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9864;
short var_8 = (short)-30715;
short var_13 = (short)20158;
int zero = 0;
unsigned char var_20 = (unsigned char)191;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)52004;
long long int var_23 = -5758360645444628887LL;
long long int var_24 = -4523066662198792747LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
