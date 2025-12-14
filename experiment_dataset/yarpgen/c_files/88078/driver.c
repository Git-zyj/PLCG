#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 875457183293346017LL;
long long int var_5 = -4156466622004109455LL;
unsigned int var_13 = 702794011U;
unsigned long long int var_14 = 11562864182756934590ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1566734737U;
unsigned short var_21 = (unsigned short)33997;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
