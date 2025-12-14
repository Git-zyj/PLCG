#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5318733431599824275LL;
short var_1 = (short)19342;
long long int var_5 = 1501079261307476111LL;
_Bool var_6 = (_Bool)0;
int var_8 = -832270844;
long long int var_10 = -5356455745854701701LL;
signed char var_13 = (signed char)-41;
long long int var_14 = -3937489443438683312LL;
int zero = 0;
unsigned long long int var_15 = 2577976075825788413ULL;
unsigned char var_16 = (unsigned char)91;
void init() {
}

void checksum() {
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
