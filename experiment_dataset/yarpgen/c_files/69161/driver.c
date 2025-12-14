#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 972076458;
int var_9 = 836630642;
unsigned int var_11 = 1774430186U;
unsigned long long int var_17 = 131894188897998837ULL;
int zero = 0;
short var_18 = (short)-24496;
unsigned long long int var_19 = 12090700656003230733ULL;
void init() {
}

void checksum() {
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
