#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36109;
unsigned short var_1 = (unsigned short)21420;
unsigned long long int var_2 = 15805885984290941057ULL;
unsigned char var_4 = (unsigned char)163;
int var_5 = -576427444;
int var_8 = 1903571875;
short var_10 = (short)-32503;
int zero = 0;
short var_12 = (short)26576;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
