#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -7521326583172095635LL;
unsigned char var_3 = (unsigned char)214;
unsigned char var_4 = (unsigned char)167;
unsigned long long int var_12 = 147887418015109859ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)18;
unsigned int var_15 = 419667811U;
void init() {
}

void checksum() {
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
