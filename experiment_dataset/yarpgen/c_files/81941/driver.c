#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54705;
short var_6 = (short)-9594;
unsigned short var_8 = (unsigned short)21641;
int zero = 0;
long long int var_18 = -7052994028713894631LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1214689825U;
unsigned long long int var_21 = 14724049162956200331ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
