#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
int var_3 = 2016001351;
int var_4 = 134112279;
int var_7 = -319885214;
unsigned long long int var_9 = 4813391553474574114ULL;
unsigned int var_10 = 2873293649U;
unsigned char var_12 = (unsigned char)231;
unsigned short var_16 = (unsigned short)56370;
unsigned int var_17 = 3131008541U;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-10406;
short var_20 = (short)-32599;
signed char var_21 = (signed char)-23;
unsigned char var_22 = (unsigned char)71;
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
