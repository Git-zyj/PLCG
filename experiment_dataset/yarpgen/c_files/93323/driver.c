#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
long long int var_1 = 5120780882368945005LL;
unsigned short var_2 = (unsigned short)6817;
signed char var_4 = (signed char)-123;
long long int var_5 = 5398109583722352985LL;
unsigned short var_6 = (unsigned short)39101;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-23921;
unsigned int var_9 = 1089512172U;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
