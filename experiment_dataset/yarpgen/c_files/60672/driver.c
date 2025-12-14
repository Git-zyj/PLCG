#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)124;
unsigned char var_3 = (unsigned char)23;
short var_7 = (short)-32296;
unsigned char var_8 = (unsigned char)10;
unsigned short var_14 = (unsigned short)65211;
short var_15 = (short)19366;
short var_16 = (short)-30990;
int zero = 0;
unsigned long long int var_20 = 8036031605985633779ULL;
unsigned char var_21 = (unsigned char)251;
signed char var_22 = (signed char)116;
unsigned char var_23 = (unsigned char)19;
long long int var_24 = -8997668719680282519LL;
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
