#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
unsigned char var_4 = (unsigned char)116;
_Bool var_5 = (_Bool)1;
short var_6 = (short)1276;
unsigned int var_8 = 2036233842U;
int zero = 0;
int var_10 = 1469183547;
unsigned int var_11 = 3663659458U;
signed char var_12 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
