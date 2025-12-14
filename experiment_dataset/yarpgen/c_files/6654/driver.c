#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5805;
long long int var_6 = -4618737469239102002LL;
long long int var_9 = 5639696608275687601LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 8932649410689633103ULL;
int var_12 = -1295095345;
long long int var_13 = -5637903921173200132LL;
short var_14 = (short)-23741;
short var_15 = (short)-10332;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
