#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5601150560980113539LL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)18917;
unsigned int var_8 = 1682937316U;
unsigned char var_10 = (unsigned char)128;
unsigned int var_11 = 2885120197U;
int zero = 0;
int var_13 = 989571293;
unsigned short var_14 = (unsigned short)3559;
short var_15 = (short)7706;
unsigned int var_16 = 3871819865U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
