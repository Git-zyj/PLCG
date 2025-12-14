#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
long long int var_4 = 1633079400664522477LL;
unsigned char var_7 = (unsigned char)174;
short var_16 = (short)-21132;
long long int var_18 = -4672433204632247811LL;
int zero = 0;
int var_19 = 1522816116;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1039328948U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
