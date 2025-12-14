#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2865884791U;
int var_2 = -778238404;
unsigned long long int var_3 = 4906985505734552927ULL;
short var_5 = (short)-10561;
short var_6 = (short)28025;
unsigned short var_7 = (unsigned short)61967;
unsigned short var_9 = (unsigned short)65159;
int zero = 0;
int var_10 = -1339244120;
long long int var_11 = -8302630945546644416LL;
long long int var_12 = 4220206275295424203LL;
short var_13 = (short)21112;
int var_14 = -1726334345;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
