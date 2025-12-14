#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 14725747616802935763ULL;
short var_10 = (short)-29455;
unsigned long long int var_14 = 17746709667739971272ULL;
unsigned char var_15 = (unsigned char)197;
unsigned short var_18 = (unsigned short)42831;
int zero = 0;
unsigned short var_19 = (unsigned short)7304;
long long int var_20 = 1303996857600602385LL;
short var_21 = (short)4827;
_Bool var_22 = (_Bool)0;
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
