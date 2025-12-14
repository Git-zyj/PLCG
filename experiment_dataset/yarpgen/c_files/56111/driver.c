#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)197;
int var_2 = -681362461;
unsigned long long int var_3 = 2982891212403521002ULL;
unsigned long long int var_5 = 3286458116974645376ULL;
unsigned long long int var_6 = 13825197242279490353ULL;
unsigned int var_7 = 2096243937U;
unsigned int var_8 = 464115321U;
short var_9 = (short)-14762;
long long int var_10 = -7743310090557121702LL;
unsigned short var_11 = (unsigned short)58179;
long long int var_12 = -2783899522258612529LL;
int zero = 0;
long long int var_14 = 4364256398864135104LL;
signed char var_15 = (signed char)116;
unsigned char var_16 = (unsigned char)68;
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
