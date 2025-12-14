#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1594;
int var_4 = -1695844185;
unsigned short var_7 = (unsigned short)1744;
int var_9 = 1823787993;
unsigned long long int var_12 = 18219896504714539069ULL;
int zero = 0;
short var_15 = (short)11030;
_Bool var_16 = (_Bool)1;
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
