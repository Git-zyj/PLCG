#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2569;
unsigned short var_2 = (unsigned short)37888;
unsigned short var_4 = (unsigned short)51549;
_Bool var_6 = (_Bool)0;
short var_8 = (short)26535;
unsigned long long int var_15 = 15579078723011878761ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)7741;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
