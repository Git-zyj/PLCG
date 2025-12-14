#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
short var_11 = (short)17651;
long long int var_12 = 4847392838508543104LL;
int zero = 0;
unsigned short var_15 = (unsigned short)46295;
unsigned short var_16 = (unsigned short)5069;
signed char var_17 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
