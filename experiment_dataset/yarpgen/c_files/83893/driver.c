#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 442134470326443913LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-126;
int zero = 0;
unsigned int var_13 = 3493894700U;
long long int var_14 = -9174818729484134806LL;
unsigned int var_15 = 772250369U;
unsigned int var_16 = 3591202903U;
int var_17 = -1101137010;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
