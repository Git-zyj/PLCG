#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4960986013033269111LL;
unsigned char var_5 = (unsigned char)220;
unsigned long long int var_8 = 5387746936428509871ULL;
unsigned char var_13 = (unsigned char)160;
int zero = 0;
int var_17 = 1333212558;
unsigned short var_18 = (unsigned short)53643;
unsigned long long int var_19 = 6298734469990508463ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
