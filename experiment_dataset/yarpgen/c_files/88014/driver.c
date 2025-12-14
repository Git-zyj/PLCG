#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2311603037U;
short var_1 = (short)-7680;
signed char var_4 = (signed char)-49;
int var_5 = 1090086607;
signed char var_6 = (signed char)-94;
unsigned long long int var_7 = 2172562976794010850ULL;
long long int var_8 = 638044816939645285LL;
unsigned char var_9 = (unsigned char)133;
short var_10 = (short)12110;
int zero = 0;
unsigned short var_11 = (unsigned short)10840;
short var_12 = (short)3227;
unsigned long long int var_13 = 5127055396455785614ULL;
int var_14 = 1576348297;
signed char var_15 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
