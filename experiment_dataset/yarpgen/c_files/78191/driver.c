#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1458129657;
short var_3 = (short)-7624;
int var_5 = -2077760284;
int zero = 0;
unsigned char var_11 = (unsigned char)121;
long long int var_12 = 6287883210671472343LL;
unsigned char var_13 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
