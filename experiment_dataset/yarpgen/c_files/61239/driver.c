#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3259032026936893700LL;
int var_2 = -1298759410;
unsigned long long int var_5 = 17696531813435962543ULL;
unsigned long long int var_6 = 11731832474714140217ULL;
int zero = 0;
int var_18 = 1623191477;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3756889264U;
unsigned int var_21 = 2715894819U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
