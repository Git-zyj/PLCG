#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_6 = (signed char)(-127 - 1);
long long int var_8 = -7962399669563944251LL;
signed char var_10 = (signed char)-63;
unsigned short var_14 = (unsigned short)9096;
unsigned int var_16 = 172219415U;
int zero = 0;
unsigned int var_20 = 1076312512U;
unsigned short var_21 = (unsigned short)44169;
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
