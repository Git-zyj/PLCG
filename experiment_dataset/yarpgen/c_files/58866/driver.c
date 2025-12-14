#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -674333604756581262LL;
long long int var_4 = 4516139150801477368LL;
long long int var_5 = 7743379551727707263LL;
long long int var_6 = 4355341804941282927LL;
long long int var_11 = -6153924425868216553LL;
long long int var_13 = 1480483335147363190LL;
long long int var_17 = -1073341902549173445LL;
long long int var_18 = 8610810174049955354LL;
int zero = 0;
long long int var_20 = 3276156178833860006LL;
long long int var_21 = -8603474418536407016LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
