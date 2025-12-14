#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1739589925;
_Bool var_1 = (_Bool)1;
long long int var_4 = 4462197182430315917LL;
int var_8 = 1713844827;
unsigned long long int var_10 = 2661797787093764146ULL;
short var_13 = (short)-29111;
int zero = 0;
int var_16 = -688784710;
int var_17 = -359760805;
_Bool var_18 = (_Bool)1;
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
