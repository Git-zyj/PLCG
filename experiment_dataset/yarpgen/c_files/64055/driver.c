#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16034;
_Bool var_1 = (_Bool)1;
short var_9 = (short)28854;
long long int var_10 = -9002265259611875431LL;
int zero = 0;
unsigned char var_16 = (unsigned char)136;
unsigned int var_17 = 2130479955U;
void init() {
}

void checksum() {
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
