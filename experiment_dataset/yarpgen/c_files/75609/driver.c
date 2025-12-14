#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47295;
unsigned short var_7 = (unsigned short)32739;
unsigned short var_9 = (unsigned short)39714;
unsigned short var_10 = (unsigned short)65421;
short var_11 = (short)8307;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-21440;
unsigned short var_16 = (unsigned short)42616;
unsigned short var_17 = (unsigned short)22358;
short var_18 = (short)-12764;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
