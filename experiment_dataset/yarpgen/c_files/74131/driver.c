#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 195532834U;
unsigned int var_5 = 1148606984U;
unsigned short var_12 = (unsigned short)27419;
long long int var_13 = -2583657929353154427LL;
int zero = 0;
unsigned short var_18 = (unsigned short)48354;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)74;
short var_21 = (short)-18769;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
