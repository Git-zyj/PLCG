#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)60828;
int var_2 = 2056488549;
long long int var_5 = 6682130293968677190LL;
unsigned long long int var_6 = 11886362129072795865ULL;
short var_8 = (short)-17769;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-98;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
