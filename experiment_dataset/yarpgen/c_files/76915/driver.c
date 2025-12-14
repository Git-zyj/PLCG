#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1317542219U;
int var_8 = 1962554113;
long long int var_9 = 7337914791359259075LL;
long long int var_11 = -5062442259188382482LL;
int var_12 = 30934405;
int var_14 = 1187579144;
int zero = 0;
long long int var_16 = -3908674425360749127LL;
int var_17 = 1437477947;
_Bool var_18 = (_Bool)0;
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
