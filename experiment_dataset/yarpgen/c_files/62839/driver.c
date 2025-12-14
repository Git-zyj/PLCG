#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1976737745838216303LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 2895091728987034044LL;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)53;
int zero = 0;
unsigned short var_13 = (unsigned short)5242;
unsigned char var_14 = (unsigned char)210;
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
