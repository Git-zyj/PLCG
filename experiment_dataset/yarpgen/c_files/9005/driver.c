#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)32414;
unsigned long long int var_5 = 6713441613424550773ULL;
short var_6 = (short)3358;
signed char var_8 = (signed char)-101;
unsigned long long int var_10 = 12294534623531748581ULL;
long long int var_12 = -8317227933283325981LL;
int zero = 0;
signed char var_14 = (signed char)84;
unsigned long long int var_15 = 13800380056358436326ULL;
unsigned int var_16 = 2320936602U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
