#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)55;
unsigned char var_2 = (unsigned char)111;
short var_3 = (short)8115;
int var_4 = 103293575;
short var_6 = (short)-13358;
int var_8 = 1624823092;
unsigned long long int var_9 = 10933584200811641964ULL;
int zero = 0;
int var_13 = -1748412600;
unsigned char var_14 = (unsigned char)18;
int var_15 = 193144655;
unsigned long long int var_16 = 2735790917339294265ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
