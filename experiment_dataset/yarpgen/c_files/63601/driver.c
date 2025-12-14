#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1887419786;
signed char var_1 = (signed char)-63;
short var_2 = (short)5837;
unsigned char var_8 = (unsigned char)53;
short var_12 = (short)10378;
_Bool var_14 = (_Bool)0;
int var_17 = 1353229101;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)65;
long long int var_21 = -9190812040873927953LL;
short var_22 = (short)29356;
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
