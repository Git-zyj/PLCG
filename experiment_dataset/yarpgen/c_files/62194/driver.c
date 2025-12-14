#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 6287389735552582238LL;
long long int var_6 = 4382554983399401122LL;
int zero = 0;
unsigned short var_12 = (unsigned short)65370;
long long int var_13 = 3614376713267354292LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5343053929159577350LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
