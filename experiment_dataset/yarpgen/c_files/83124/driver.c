#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
int var_3 = -2003240210;
short var_6 = (short)13657;
long long int var_7 = -8699063278531156702LL;
signed char var_9 = (signed char)122;
int zero = 0;
unsigned char var_12 = (unsigned char)145;
long long int var_13 = -8328065730944107129LL;
signed char var_14 = (signed char)70;
short var_15 = (short)857;
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
