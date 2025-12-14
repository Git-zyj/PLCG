#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1484219379329590449LL;
unsigned long long int var_3 = 14970446036138540889ULL;
short var_5 = (short)-8606;
int var_6 = 409578989;
unsigned long long int var_7 = 6463847102540891097ULL;
int zero = 0;
signed char var_11 = (signed char)64;
short var_12 = (short)24598;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9680731520790532207ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
