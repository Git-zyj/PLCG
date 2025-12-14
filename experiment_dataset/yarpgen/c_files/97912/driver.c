#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)31487;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 1772809729U;
int zero = 0;
unsigned short var_19 = (unsigned short)39278;
short var_20 = (short)10866;
unsigned int var_21 = 3960148017U;
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
