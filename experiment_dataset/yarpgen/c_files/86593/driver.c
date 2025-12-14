#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 3103860742830751940LL;
int var_2 = 1638871478;
unsigned long long int var_5 = 15721230818229994530ULL;
_Bool var_6 = (_Bool)1;
int var_9 = 417427388;
unsigned int var_10 = 4192103775U;
long long int var_11 = 6781737085191409278LL;
int zero = 0;
short var_12 = (short)-15964;
short var_13 = (short)-22732;
int var_14 = 987120516;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
