#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5550121068335916360ULL;
unsigned char var_6 = (unsigned char)113;
long long int var_7 = -1167036191976476519LL;
long long int var_9 = -7632466742553166791LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = -635996538;
unsigned long long int var_13 = 8510267425956539759ULL;
unsigned long long int var_14 = 2725197184764908422ULL;
short var_15 = (short)-4639;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
