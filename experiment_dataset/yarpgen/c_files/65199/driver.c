#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6143873484052522173LL;
unsigned long long int var_5 = 11992221284847732211ULL;
signed char var_6 = (signed char)-30;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 11115047518433263175ULL;
int zero = 0;
unsigned long long int var_19 = 954979454786675975ULL;
unsigned long long int var_20 = 10762063547029246957ULL;
unsigned int var_21 = 1449175993U;
long long int var_22 = 6816948376361729834LL;
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
