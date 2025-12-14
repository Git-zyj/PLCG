#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 11581592834810165305ULL;
long long int var_11 = -5891976660516002754LL;
int var_12 = -1971334730;
signed char var_13 = (signed char)4;
short var_18 = (short)30934;
int zero = 0;
unsigned long long int var_20 = 13549004008286688228ULL;
long long int var_21 = -350020512768904703LL;
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
