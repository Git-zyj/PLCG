#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 714550707;
int var_3 = -1063171642;
unsigned int var_4 = 3268537002U;
unsigned long long int var_6 = 2270461278493982333ULL;
long long int var_9 = 8600175398075039425LL;
signed char var_10 = (signed char)-112;
int zero = 0;
short var_12 = (short)-19211;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)64318;
signed char var_15 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
