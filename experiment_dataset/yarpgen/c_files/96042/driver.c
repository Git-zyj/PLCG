#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
unsigned int var_2 = 2929088740U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3315811372U;
int var_6 = -1070126690;
long long int var_9 = -6607338223248372850LL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 629712490324711961ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)128;
unsigned int var_16 = 3894275920U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
