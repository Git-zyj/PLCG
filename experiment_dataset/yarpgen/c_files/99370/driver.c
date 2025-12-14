#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3809545640774702411LL;
long long int var_3 = 2407211556890066723LL;
short var_4 = (short)9331;
_Bool var_5 = (_Bool)0;
int var_15 = 731718765;
int var_16 = -47838821;
int zero = 0;
signed char var_17 = (signed char)-55;
short var_18 = (short)6594;
void init() {
}

void checksum() {
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
