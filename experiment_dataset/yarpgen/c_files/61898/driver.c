#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21444;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-22356;
unsigned long long int var_13 = 8623910767056737919ULL;
int zero = 0;
signed char var_14 = (signed char)-2;
short var_15 = (short)10279;
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
