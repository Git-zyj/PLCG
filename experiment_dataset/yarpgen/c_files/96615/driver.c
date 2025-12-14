#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
long long int var_2 = -2017245939277895728LL;
unsigned short var_3 = (unsigned short)1647;
long long int var_4 = -8162327699979203462LL;
unsigned char var_12 = (unsigned char)146;
unsigned char var_13 = (unsigned char)100;
int zero = 0;
short var_14 = (short)3568;
short var_15 = (short)-28284;
unsigned long long int var_16 = 14243226528159022906ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
