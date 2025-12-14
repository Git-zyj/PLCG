#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned char var_1 = (unsigned char)210;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)221;
long long int var_10 = 1320379996180397699LL;
int zero = 0;
unsigned char var_11 = (unsigned char)123;
_Bool var_12 = (_Bool)0;
long long int var_13 = -1768454953818307201LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
