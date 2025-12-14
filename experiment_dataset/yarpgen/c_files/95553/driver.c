#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8044878397673389257LL;
unsigned short var_3 = (unsigned short)3752;
long long int var_4 = 7597499832756453071LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 15122883880686448158ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 6232685408063930525ULL;
int zero = 0;
int var_16 = 1703590226;
unsigned long long int var_17 = 7573618760654680190ULL;
void init() {
}

void checksum() {
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
