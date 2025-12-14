#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31238;
_Bool var_5 = (_Bool)1;
short var_8 = (short)21587;
short var_12 = (short)13414;
unsigned char var_13 = (unsigned char)86;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)36457;
int zero = 0;
long long int var_16 = -1552118701378780490LL;
_Bool var_17 = (_Bool)1;
int var_18 = 1159922116;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
