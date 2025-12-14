#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)-13001;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 50834186U;
unsigned int var_15 = 3997798640U;
int zero = 0;
unsigned int var_17 = 225145167U;
unsigned long long int var_18 = 18402063350241697143ULL;
int var_19 = -1588603991;
int var_20 = 794479935;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
