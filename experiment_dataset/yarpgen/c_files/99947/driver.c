#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 17022817690874199169ULL;
unsigned short var_3 = (unsigned short)45090;
short var_7 = (short)-30104;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 4241461124U;
int var_17 = -1683355948;
short var_18 = (short)16276;
int zero = 0;
unsigned short var_19 = (unsigned short)32038;
unsigned short var_20 = (unsigned short)26077;
short var_21 = (short)16917;
unsigned long long int var_22 = 13023086659567099056ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
