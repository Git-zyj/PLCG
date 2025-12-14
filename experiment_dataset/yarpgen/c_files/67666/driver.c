#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1986483664U;
unsigned int var_10 = 3003983539U;
int zero = 0;
unsigned long long int var_15 = 11802508095268908436ULL;
short var_16 = (short)-22908;
unsigned long long int var_17 = 13341995382240907177ULL;
unsigned long long int var_18 = 11282348890125427427ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
