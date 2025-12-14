#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_8 = -1115135584;
long long int var_9 = -1356966702935834251LL;
unsigned int var_12 = 1615636193U;
int var_15 = 527555642;
int zero = 0;
long long int var_16 = -6056005255486595047LL;
unsigned int var_17 = 734891652U;
unsigned int var_18 = 3465805929U;
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
