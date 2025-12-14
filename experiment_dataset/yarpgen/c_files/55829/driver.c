#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 1345855163;
int var_15 = -867415340;
int var_17 = -1689177025;
int zero = 0;
unsigned short var_20 = (unsigned short)61621;
short var_21 = (short)-20859;
unsigned long long int var_22 = 10141822774282005137ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
