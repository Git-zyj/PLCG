#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14813273911761740206ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)231;
long long int var_10 = -1739319616278171814LL;
unsigned short var_13 = (unsigned short)8111;
unsigned short var_15 = (unsigned short)39793;
unsigned short var_16 = (unsigned short)23708;
unsigned char var_17 = (unsigned char)164;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)13199;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)205;
void init() {
}

void checksum() {
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
