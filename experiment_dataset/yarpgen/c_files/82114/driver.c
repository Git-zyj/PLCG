#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1556700637202033948LL;
unsigned short var_5 = (unsigned short)44225;
long long int var_9 = 6313339777971301409LL;
int zero = 0;
unsigned short var_10 = (unsigned short)38284;
unsigned long long int var_11 = 5795291649204392417ULL;
unsigned short var_12 = (unsigned short)33934;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
