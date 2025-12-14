#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16198491973291683272ULL;
unsigned long long int var_8 = 14303027069790842178ULL;
long long int var_12 = -2126844491165074468LL;
int zero = 0;
unsigned short var_15 = (unsigned short)64280;
unsigned long long int var_16 = 16875505784264780862ULL;
void init() {
}

void checksum() {
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
