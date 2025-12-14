#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1963799449;
signed char var_6 = (signed char)-117;
unsigned char var_9 = (unsigned char)220;
long long int var_12 = -6418378680593769154LL;
short var_13 = (short)-4875;
int zero = 0;
int var_14 = 1903220765;
long long int var_15 = -758663931138814159LL;
void init() {
}

void checksum() {
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
