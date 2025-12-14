#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13276;
int var_3 = -1121291925;
unsigned long long int var_4 = 5864254895991215410ULL;
int var_6 = 1004173240;
_Bool var_7 = (_Bool)1;
int var_8 = 1187226824;
unsigned int var_9 = 152982766U;
unsigned short var_10 = (unsigned short)53558;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 3692376450755450322ULL;
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
