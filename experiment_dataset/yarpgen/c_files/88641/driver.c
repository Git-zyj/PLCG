#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -4055401195219884578LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 14700982964066227044ULL;
unsigned long long int var_9 = 6783329558939622389ULL;
unsigned char var_12 = (unsigned char)135;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)173;
int zero = 0;
long long int var_17 = -1094639645960775141LL;
short var_18 = (short)914;
unsigned long long int var_19 = 5367407018887843537ULL;
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
