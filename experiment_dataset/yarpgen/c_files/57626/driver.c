#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)241;
unsigned short var_4 = (unsigned short)54674;
unsigned char var_5 = (unsigned char)205;
unsigned int var_6 = 749814764U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3090463606U;
unsigned long long int var_12 = 3762489850610819167ULL;
int var_14 = 923628865;
int zero = 0;
long long int var_16 = -1263079515156911874LL;
unsigned short var_17 = (unsigned short)58315;
short var_18 = (short)20016;
void init() {
}

void checksum() {
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
