#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)29742;
unsigned short var_6 = (unsigned short)44637;
unsigned long long int var_8 = 13082841213813375334ULL;
unsigned long long int var_10 = 12469446198309784416ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1039365560;
unsigned long long int var_13 = 7146872956700102118ULL;
long long int var_14 = 6164993680300845521LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
