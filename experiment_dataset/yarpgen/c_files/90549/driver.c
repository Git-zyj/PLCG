#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
signed char var_1 = (signed char)25;
int var_2 = 804254252;
signed char var_5 = (signed char)122;
int var_9 = 1453744555;
signed char var_10 = (signed char)-73;
unsigned short var_11 = (unsigned short)37160;
unsigned int var_13 = 395448497U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 2071763621U;
signed char var_16 = (signed char)-56;
unsigned long long int var_17 = 15998065885028901083ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
