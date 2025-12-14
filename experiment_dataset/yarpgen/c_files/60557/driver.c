#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12691271070526027528ULL;
int var_1 = -1107957058;
_Bool var_2 = (_Bool)1;
long long int var_3 = 6385551719309560057LL;
unsigned int var_4 = 1098952299U;
unsigned short var_5 = (unsigned short)58709;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 4578378143192024122ULL;
short var_9 = (short)-23748;
int zero = 0;
unsigned long long int var_14 = 14928800851123956515ULL;
short var_15 = (short)13829;
signed char var_16 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
