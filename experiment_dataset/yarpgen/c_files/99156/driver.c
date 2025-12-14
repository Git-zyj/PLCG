#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1961928188;
int var_3 = 857549347;
short var_5 = (short)-9236;
long long int var_9 = -485007421811094402LL;
unsigned long long int var_10 = 14568459244019516653ULL;
long long int var_11 = 8202118281388971LL;
short var_13 = (short)-23952;
int zero = 0;
signed char var_15 = (signed char)-67;
unsigned long long int var_16 = 11175954028032108361ULL;
unsigned int var_17 = 2603581004U;
unsigned long long int var_18 = 240128879701932723ULL;
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
