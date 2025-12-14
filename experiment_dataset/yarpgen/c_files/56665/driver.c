#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1663256974U;
short var_2 = (short)381;
unsigned long long int var_4 = 18120921827221744843ULL;
short var_5 = (short)-14645;
unsigned short var_9 = (unsigned short)49630;
unsigned short var_10 = (unsigned short)10507;
long long int var_11 = 6010024057308797713LL;
int var_13 = 2112053938;
unsigned short var_14 = (unsigned short)24506;
long long int var_15 = -1535751505371291796LL;
int zero = 0;
short var_19 = (short)-9386;
unsigned short var_20 = (unsigned short)46536;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
