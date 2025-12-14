#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25464;
_Bool var_2 = (_Bool)0;
long long int var_3 = -3573901410697842730LL;
unsigned long long int var_5 = 15824840592038894675ULL;
int var_7 = 244423678;
signed char var_10 = (signed char)-125;
long long int var_13 = 8290764569718336069LL;
short var_15 = (short)2120;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-45;
unsigned long long int var_18 = 8726318267869707318ULL;
int var_19 = -1110052053;
void init() {
}

void checksum() {
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
