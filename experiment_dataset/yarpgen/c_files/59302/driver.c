#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5559876897940699832LL;
unsigned short var_4 = (unsigned short)13210;
unsigned short var_6 = (unsigned short)36913;
unsigned char var_11 = (unsigned char)253;
unsigned short var_12 = (unsigned short)65223;
int zero = 0;
int var_13 = -1417307462;
int var_14 = -219583857;
void init() {
}

void checksum() {
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
