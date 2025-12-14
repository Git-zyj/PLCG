#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8225411850009452229LL;
long long int var_2 = 4987804882083542576LL;
_Bool var_9 = (_Bool)1;
signed char var_14 = (signed char)62;
int zero = 0;
short var_16 = (short)4747;
unsigned long long int var_17 = 7149137299670435584ULL;
short var_18 = (short)-31421;
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
