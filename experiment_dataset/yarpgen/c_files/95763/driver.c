#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20218;
unsigned short var_2 = (unsigned short)25900;
unsigned int var_12 = 791701740U;
unsigned short var_14 = (unsigned short)1019;
short var_15 = (short)31146;
unsigned char var_16 = (unsigned char)51;
signed char var_17 = (signed char)47;
long long int var_18 = 1405362267302593562LL;
int zero = 0;
unsigned int var_19 = 592849805U;
long long int var_20 = 5390544712494042927LL;
int var_21 = -577526575;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
