#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 3676049416392516137LL;
short var_12 = (short)-28854;
signed char var_13 = (signed char)35;
int zero = 0;
unsigned long long int var_16 = 14420841646433964662ULL;
unsigned short var_17 = (unsigned short)56545;
long long int var_18 = 6332758457660413637LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
