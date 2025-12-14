#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 3150299008248251068ULL;
_Bool var_6 = (_Bool)1;
int var_7 = 353291274;
int var_8 = 1574601807;
int var_11 = -380477131;
signed char var_13 = (signed char)-91;
int zero = 0;
long long int var_14 = 3367156279674312252LL;
int var_15 = -497779619;
unsigned char var_16 = (unsigned char)96;
void init() {
}

void checksum() {
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
