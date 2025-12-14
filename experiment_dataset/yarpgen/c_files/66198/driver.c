#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1638716791;
long long int var_2 = 8460168755336647106LL;
_Bool var_3 = (_Bool)1;
long long int var_5 = -7628396252704102956LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 5441742298358825878ULL;
long long int var_12 = 3489272991627239480LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)113;
signed char var_16 = (signed char)26;
int var_17 = 2080850889;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
