#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 13597481161957746000ULL;
short var_7 = (short)-19174;
signed char var_9 = (signed char)69;
unsigned long long int var_14 = 1004591508426652802ULL;
int zero = 0;
int var_16 = -235642992;
unsigned char var_17 = (unsigned char)171;
unsigned long long int var_18 = 6688764359363521046ULL;
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
