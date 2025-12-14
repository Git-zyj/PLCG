#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)190;
long long int var_3 = 3583778596219199689LL;
unsigned short var_5 = (unsigned short)7623;
unsigned int var_11 = 2921041037U;
int zero = 0;
short var_12 = (short)-24898;
short var_13 = (short)7584;
unsigned char var_14 = (unsigned char)215;
void init() {
}

void checksum() {
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
