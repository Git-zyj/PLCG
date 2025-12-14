#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1737554460;
unsigned short var_4 = (unsigned short)60084;
_Bool var_6 = (_Bool)0;
int zero = 0;
long long int var_13 = 1850008921644609411LL;
unsigned short var_14 = (unsigned short)30036;
void init() {
}

void checksum() {
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
