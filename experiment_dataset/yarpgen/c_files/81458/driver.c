#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2102379390U;
long long int var_1 = 2866119812658549063LL;
long long int var_2 = -7872076390493520129LL;
unsigned int var_4 = 987149170U;
int var_7 = 1370346047;
signed char var_14 = (signed char)-19;
int zero = 0;
signed char var_16 = (signed char)62;
_Bool var_17 = (_Bool)0;
int var_18 = 1098989669;
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
