#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 405979023940056918LL;
unsigned char var_4 = (unsigned char)127;
signed char var_6 = (signed char)-66;
int zero = 0;
unsigned int var_14 = 2717056979U;
_Bool var_15 = (_Bool)1;
int var_16 = 250948962;
int var_17 = -1502990775;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
