#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16697198057197790594ULL;
int var_1 = -491324653;
int var_2 = 1744847493;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_6 = (short)13397;
_Bool var_7 = (_Bool)1;
int var_8 = 2037894539;
signed char var_9 = (signed char)76;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -4768854479799896401LL;
signed char var_12 = (signed char)49;
unsigned short var_13 = (unsigned short)23259;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
