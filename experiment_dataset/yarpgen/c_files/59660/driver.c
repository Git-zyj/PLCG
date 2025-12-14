#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1966301496;
long long int var_3 = 3068459110191961300LL;
signed char var_6 = (signed char)54;
long long int var_13 = 7919456055644401091LL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)50395;
int zero = 0;
long long int var_20 = -314896933344437427LL;
unsigned long long int var_21 = 16688385012932799504ULL;
void init() {
}

void checksum() {
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
