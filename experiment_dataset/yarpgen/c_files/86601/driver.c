#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 535262954394946224ULL;
unsigned int var_2 = 1403689205U;
unsigned short var_9 = (unsigned short)64392;
long long int var_10 = -499208963906899121LL;
unsigned char var_12 = (unsigned char)52;
unsigned char var_13 = (unsigned char)254;
int zero = 0;
short var_19 = (short)24319;
long long int var_20 = -419759914100634635LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)21012;
void init() {
}

void checksum() {
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
