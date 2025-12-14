#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2854;
long long int var_4 = -5662497086690224628LL;
long long int var_6 = -6810155217375339988LL;
unsigned char var_8 = (unsigned char)253;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -5941293216983301177LL;
short var_20 = (short)15763;
unsigned int var_21 = 3433559369U;
short var_22 = (short)10168;
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
