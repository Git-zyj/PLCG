#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14080;
unsigned long long int var_4 = 8609664644329833009ULL;
unsigned short var_10 = (unsigned short)51136;
short var_11 = (short)-14751;
short var_13 = (short)-25217;
long long int var_15 = 1172830583751169444LL;
unsigned short var_16 = (unsigned short)17900;
int zero = 0;
unsigned short var_17 = (unsigned short)28215;
unsigned int var_18 = 1080062962U;
unsigned short var_19 = (unsigned short)20041;
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
