#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 648422773631123677LL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3881692280U;
long long int var_10 = 692869895503600233LL;
int zero = 0;
unsigned int var_12 = 1194460479U;
unsigned char var_13 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
