#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7722288379925124365LL;
unsigned int var_4 = 718644389U;
long long int var_7 = 2955882506980181559LL;
int var_10 = 1275868851;
int var_11 = 1133781539;
int zero = 0;
unsigned long long int var_13 = 14720386751166802047ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
