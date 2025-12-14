#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10271742882915602338ULL;
signed char var_3 = (signed char)89;
long long int var_9 = -6507691432222837582LL;
unsigned long long int var_10 = 12976667848993388564ULL;
unsigned char var_11 = (unsigned char)109;
int zero = 0;
unsigned long long int var_12 = 7458649657463379201ULL;
signed char var_13 = (signed char)-120;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)32;
unsigned char var_16 = (unsigned char)212;
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
