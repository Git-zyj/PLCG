#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)12;
unsigned short var_5 = (unsigned short)1062;
long long int var_6 = 4364034350826306383LL;
long long int var_11 = 7999054221025264427LL;
unsigned int var_12 = 2999133167U;
unsigned short var_13 = (unsigned short)45111;
unsigned char var_16 = (unsigned char)31;
long long int var_17 = 9021954039279703038LL;
int zero = 0;
unsigned char var_20 = (unsigned char)67;
short var_21 = (short)13547;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)34446;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
