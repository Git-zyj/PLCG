#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2491340403518683627LL;
int var_5 = 823843306;
unsigned int var_6 = 142301519U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)9696;
unsigned long long int var_17 = 9033648741333396603ULL;
int zero = 0;
unsigned long long int var_19 = 6721878366729701094ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
