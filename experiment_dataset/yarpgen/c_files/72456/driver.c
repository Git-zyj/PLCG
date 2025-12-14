#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3157;
unsigned char var_2 = (unsigned char)135;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_6 = -272883473;
unsigned short var_7 = (unsigned short)32004;
unsigned short var_11 = (unsigned short)4193;
int zero = 0;
unsigned short var_12 = (unsigned short)14470;
long long int var_13 = -8190720059232855970LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)96;
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
