#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5217;
long long int var_6 = -8749158687165661959LL;
unsigned short var_10 = (unsigned short)33966;
unsigned short var_13 = (unsigned short)40498;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = -202202113819726972LL;
unsigned int var_17 = 2037436405U;
void init() {
}

void checksum() {
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
