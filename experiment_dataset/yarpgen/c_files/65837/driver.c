#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
unsigned int var_4 = 452956209U;
_Bool var_6 = (_Bool)0;
short var_8 = (short)6253;
long long int var_9 = 7138423440861643867LL;
short var_10 = (short)11740;
unsigned char var_12 = (unsigned char)182;
signed char var_13 = (signed char)32;
unsigned short var_14 = (unsigned short)22088;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)19132;
unsigned char var_17 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
