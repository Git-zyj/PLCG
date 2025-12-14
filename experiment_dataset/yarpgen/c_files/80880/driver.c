#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)10982;
unsigned long long int var_9 = 14314225956902079462ULL;
unsigned long long int var_10 = 4016512317533077578ULL;
int var_13 = -1039758989;
long long int var_15 = -3748615048791177529LL;
int var_16 = 1567959557;
int var_17 = 932898811;
long long int var_19 = 7265200894542847195LL;
int zero = 0;
short var_20 = (short)-30964;
int var_21 = 1131163199;
unsigned char var_22 = (unsigned char)181;
long long int var_23 = 5722770018658694061LL;
void init() {
}

void checksum() {
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
