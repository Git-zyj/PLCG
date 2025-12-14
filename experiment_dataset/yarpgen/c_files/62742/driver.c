#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 284828001079952702ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 3962620021U;
short var_15 = (short)168;
int zero = 0;
int var_16 = 657058467;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)47166;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
