#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-26833;
_Bool var_8 = (_Bool)0;
long long int var_9 = -6925947629942419619LL;
unsigned long long int var_13 = 9116024136809823265ULL;
unsigned long long int var_15 = 9842538578535060664ULL;
int zero = 0;
short var_20 = (short)-31369;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4091766533843432858LL;
void init() {
}

void checksum() {
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
