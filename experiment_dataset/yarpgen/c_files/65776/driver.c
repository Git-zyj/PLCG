#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12458156216998825285ULL;
int var_3 = -1128263624;
_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 1855568173336529863ULL;
unsigned long long int var_18 = 15913333194366383840ULL;
long long int var_19 = -2579326721575883660LL;
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
