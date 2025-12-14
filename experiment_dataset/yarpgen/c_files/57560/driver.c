#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)23250;
long long int var_11 = 4142852075205031141LL;
int zero = 0;
signed char var_14 = (signed char)-84;
unsigned short var_15 = (unsigned short)51430;
_Bool var_16 = (_Bool)1;
short var_17 = (short)8806;
void init() {
}

void checksum() {
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
