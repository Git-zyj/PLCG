#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15004536947946896900ULL;
int var_1 = -1877954799;
unsigned char var_2 = (unsigned char)252;
long long int var_3 = 4659548848775050523LL;
unsigned short var_4 = (unsigned short)41183;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-86;
signed char var_8 = (signed char)-122;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1264338412U;
int var_15 = 842053750;
int var_16 = -1087395663;
long long int var_17 = -6481198028569857331LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
