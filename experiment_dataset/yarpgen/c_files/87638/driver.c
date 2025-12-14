#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23711;
_Bool var_9 = (_Bool)0;
long long int var_11 = -7851428082308393466LL;
int zero = 0;
long long int var_13 = 2310873953930531376LL;
unsigned int var_14 = 3379053729U;
signed char var_15 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
