#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 3594393025958318224ULL;
long long int var_6 = -458096631828659524LL;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-11267;
int zero = 0;
long long int var_18 = -591322296244906633LL;
short var_19 = (short)-200;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
