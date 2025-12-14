#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 567697048712229996ULL;
int var_8 = 17151916;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2565274178U;
int zero = 0;
long long int var_16 = -1399712449605292492LL;
short var_17 = (short)47;
short var_18 = (short)-26803;
unsigned int var_19 = 536505783U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
