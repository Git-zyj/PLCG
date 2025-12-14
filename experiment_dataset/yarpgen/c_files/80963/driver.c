#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56760;
unsigned long long int var_3 = 4160374142208891171ULL;
unsigned short var_4 = (unsigned short)53100;
unsigned short var_5 = (unsigned short)55356;
short var_7 = (short)5421;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 14287211949977075275ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)50470;
int var_20 = 391157871;
long long int var_21 = -1205596781143487004LL;
void init() {
}

void checksum() {
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
