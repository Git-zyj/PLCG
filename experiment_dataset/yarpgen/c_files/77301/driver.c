#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)59980;
long long int var_5 = -9195344214239728188LL;
signed char var_9 = (signed char)37;
int var_11 = 1756585924;
short var_12 = (short)18825;
long long int var_16 = 7688252291666498907LL;
int zero = 0;
unsigned int var_18 = 1075171518U;
unsigned short var_19 = (unsigned short)6377;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)121;
int var_22 = 910589248;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
