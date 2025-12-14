#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)126;
unsigned long long int var_9 = 10301739796839906864ULL;
unsigned long long int var_11 = 5780389198321050766ULL;
int var_13 = -140999609;
int zero = 0;
unsigned short var_14 = (unsigned short)64859;
long long int var_15 = -9858785176842963LL;
unsigned long long int var_16 = 14015112505517535046ULL;
signed char var_17 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
