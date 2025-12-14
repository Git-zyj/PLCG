#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2507007365U;
unsigned short var_5 = (unsigned short)11077;
_Bool var_7 = (_Bool)0;
short var_16 = (short)29242;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -151914140436277012LL;
unsigned short var_21 = (unsigned short)9433;
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
