#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11916085626706238854ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)58773;
unsigned int var_7 = 1755465391U;
int zero = 0;
int var_12 = 1748389493;
short var_13 = (short)9065;
long long int var_14 = 2079035687921874134LL;
void init() {
}

void checksum() {
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
