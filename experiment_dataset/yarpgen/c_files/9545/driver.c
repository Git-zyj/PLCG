#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1091074291;
unsigned short var_3 = (unsigned short)41975;
long long int var_4 = -595746555189607559LL;
unsigned char var_5 = (unsigned char)71;
unsigned int var_6 = 2997592401U;
unsigned char var_15 = (unsigned char)221;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 665008582U;
short var_18 = (short)9640;
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
