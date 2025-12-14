#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3252783135U;
unsigned int var_9 = 2355166199U;
unsigned int var_10 = 1003483147U;
int var_11 = 1560031063;
long long int var_13 = 5837510584146143403LL;
unsigned char var_14 = (unsigned char)223;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)58;
int zero = 0;
short var_19 = (short)25313;
long long int var_20 = 7835993778148491799LL;
long long int var_21 = 6177544976619561420LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
