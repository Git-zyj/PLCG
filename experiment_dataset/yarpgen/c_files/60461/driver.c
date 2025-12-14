#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-18499;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3121582740U;
unsigned char var_10 = (unsigned char)254;
unsigned char var_11 = (unsigned char)167;
short var_12 = (short)5103;
long long int var_14 = -1133974889817218366LL;
int zero = 0;
unsigned short var_15 = (unsigned short)17233;
unsigned int var_16 = 2985772569U;
unsigned char var_17 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
