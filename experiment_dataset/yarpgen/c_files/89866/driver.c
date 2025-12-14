#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-13174;
unsigned char var_13 = (unsigned char)209;
int var_14 = 1664026785;
unsigned long long int var_16 = 15221253748953578ULL;
int zero = 0;
long long int var_19 = 464177718392367315LL;
long long int var_20 = 1387160351636886987LL;
int var_21 = 39759624;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
