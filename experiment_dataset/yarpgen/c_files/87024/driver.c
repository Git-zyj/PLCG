#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13607;
int var_1 = -586436328;
long long int var_3 = 688841307339438826LL;
short var_4 = (short)20392;
int var_7 = -760056355;
unsigned int var_8 = 3928993434U;
unsigned char var_9 = (unsigned char)166;
int var_12 = 1650558194;
int zero = 0;
short var_13 = (short)21438;
unsigned char var_14 = (unsigned char)37;
unsigned short var_15 = (unsigned short)16500;
int var_16 = -1047789555;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
