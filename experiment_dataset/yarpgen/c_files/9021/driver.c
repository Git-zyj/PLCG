#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30799;
_Bool var_4 = (_Bool)1;
long long int var_5 = -9171166667732540352LL;
int var_6 = -1339872381;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = 8355870528590395890LL;
long long int var_12 = 2933335075092796955LL;
unsigned int var_13 = 433714127U;
long long int var_14 = 1025783741457118272LL;
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
