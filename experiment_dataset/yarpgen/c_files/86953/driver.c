#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28227;
unsigned long long int var_9 = 3953759316266551456ULL;
long long int var_10 = 2168862592392904983LL;
int var_14 = -816985351;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)30;
int zero = 0;
long long int var_19 = 5524731386179441995LL;
unsigned char var_20 = (unsigned char)131;
int var_21 = -700850384;
unsigned long long int var_22 = 7756863263665978948ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
