#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)70;
long long int var_7 = -6203568584955081813LL;
unsigned short var_9 = (unsigned short)6710;
_Bool var_10 = (_Bool)0;
long long int var_14 = 7861738341006898173LL;
int zero = 0;
short var_19 = (short)-23786;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7647353366785336357ULL;
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
