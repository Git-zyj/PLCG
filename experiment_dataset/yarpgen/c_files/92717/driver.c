#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-17;
unsigned short var_7 = (unsigned short)34602;
unsigned long long int var_8 = 2378148905112842135ULL;
unsigned short var_9 = (unsigned short)7552;
unsigned int var_10 = 1907893094U;
unsigned int var_11 = 2610806206U;
int var_12 = -1311348932;
_Bool var_13 = (_Bool)0;
unsigned int var_17 = 3166135467U;
int zero = 0;
unsigned int var_20 = 2399247755U;
unsigned long long int var_21 = 9206338607968705180ULL;
signed char var_22 = (signed char)-83;
void init() {
}

void checksum() {
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
