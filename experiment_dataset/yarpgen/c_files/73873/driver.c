#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1216091645125662592LL;
long long int var_8 = 6452722991761386605LL;
int var_10 = 1761702443;
int zero = 0;
long long int var_12 = -5463196649707090637LL;
int var_13 = 1893809288;
long long int var_14 = -8885925910887442331LL;
unsigned long long int var_15 = 491135133710912201ULL;
unsigned int var_16 = 4203428701U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
