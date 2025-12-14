#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)38450;
short var_9 = (short)-15400;
unsigned long long int var_10 = 15902740882543775335ULL;
int var_11 = -788932267;
unsigned int var_14 = 3080244538U;
int var_15 = -1044097380;
int zero = 0;
unsigned short var_17 = (unsigned short)2916;
unsigned short var_18 = (unsigned short)30842;
short var_19 = (short)21050;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
