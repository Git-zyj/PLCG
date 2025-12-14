#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
unsigned int var_2 = 3368006677U;
signed char var_12 = (signed char)72;
int var_16 = -979420429;
signed char var_18 = (signed char)-117;
unsigned int var_19 = 224877805U;
int zero = 0;
int var_20 = 1086834601;
int var_21 = 188040319;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
