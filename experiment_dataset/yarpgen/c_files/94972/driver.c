#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 192130627U;
int zero = 0;
int var_12 = -1593107801;
unsigned long long int var_13 = 8819326924168063450ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 2448503044466952395ULL;
signed char var_16 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
