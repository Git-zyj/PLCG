#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40354;
unsigned long long int var_7 = 17504941300136289466ULL;
short var_12 = (short)-31859;
int zero = 0;
unsigned int var_16 = 3338763860U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 13283331584123984647ULL;
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
