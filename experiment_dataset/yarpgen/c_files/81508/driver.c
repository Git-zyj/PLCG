#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)24;
short var_2 = (short)-32555;
int var_6 = 599483419;
long long int var_9 = 5306950285781210863LL;
int var_10 = -582810015;
unsigned long long int var_11 = 5635337947803493249ULL;
int zero = 0;
int var_12 = -2053037191;
unsigned long long int var_13 = 8008019479720123393ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
