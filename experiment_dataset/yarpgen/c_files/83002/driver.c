#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8181075191103355278LL;
unsigned int var_3 = 1589659486U;
unsigned int var_6 = 3303709276U;
long long int var_8 = 9031678347335081448LL;
int var_10 = 1226614117;
signed char var_13 = (signed char)75;
unsigned char var_17 = (unsigned char)96;
int zero = 0;
long long int var_18 = 4372897383283127119LL;
int var_19 = 799782;
short var_20 = (short)22049;
unsigned int var_21 = 3559534708U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
