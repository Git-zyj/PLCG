#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2569512407U;
short var_6 = (short)-5892;
_Bool var_7 = (_Bool)0;
unsigned short var_11 = (unsigned short)59629;
signed char var_14 = (signed char)-3;
long long int var_16 = -2089487734149330773LL;
int zero = 0;
unsigned short var_20 = (unsigned short)3903;
short var_21 = (short)24511;
void init() {
}

void checksum() {
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
