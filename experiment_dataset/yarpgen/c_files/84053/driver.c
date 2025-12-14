#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
long long int var_2 = -5380204787891971999LL;
long long int var_4 = -1368899740829305649LL;
long long int var_5 = 8681265418478473481LL;
long long int var_10 = -3459471952616757993LL;
signed char var_12 = (signed char)72;
int zero = 0;
long long int var_14 = -1425815122694611775LL;
signed char var_15 = (signed char)-77;
unsigned int var_16 = 3572056726U;
signed char var_17 = (signed char)-109;
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
