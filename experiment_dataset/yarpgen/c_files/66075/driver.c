#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_9 = (unsigned char)13;
_Bool var_14 = (_Bool)0;
long long int var_16 = 2650490066195029913LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)42331;
unsigned short var_19 = (unsigned short)6664;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
