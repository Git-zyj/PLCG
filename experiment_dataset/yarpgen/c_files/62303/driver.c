#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20366;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 805974376U;
short var_7 = (short)30833;
_Bool var_8 = (_Bool)1;
short var_9 = (short)20760;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int var_17 = -699722736;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)13192;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
