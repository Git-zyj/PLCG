#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)231;
int var_3 = -1318371734;
int var_4 = 1518906282;
short var_5 = (short)14966;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 4074853156U;
unsigned long long int var_13 = 9629651168101464581ULL;
unsigned long long int var_14 = 6506210206638863107ULL;
int zero = 0;
long long int var_15 = 6391040596717025773LL;
unsigned short var_16 = (unsigned short)6044;
short var_17 = (short)5291;
signed char var_18 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
