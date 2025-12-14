#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1487117556U;
short var_7 = (short)-30985;
unsigned int var_9 = 2123528904U;
int var_10 = -725099618;
unsigned int var_11 = 1758725316U;
unsigned short var_16 = (unsigned short)8251;
int zero = 0;
short var_17 = (short)32738;
int var_18 = -2030071621;
int var_19 = 1730595108;
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
