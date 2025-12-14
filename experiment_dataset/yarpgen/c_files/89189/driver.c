#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
unsigned long long int var_1 = 3380876366553894716ULL;
signed char var_2 = (signed char)-110;
short var_3 = (short)5948;
unsigned long long int var_4 = 11035891647576546966ULL;
signed char var_5 = (signed char)76;
_Bool var_7 = (_Bool)1;
short var_8 = (short)28377;
short var_9 = (short)17402;
unsigned short var_10 = (unsigned short)59734;
int zero = 0;
unsigned int var_11 = 174340675U;
unsigned long long int var_12 = 10459464200208210591ULL;
int var_13 = 1793247047;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
