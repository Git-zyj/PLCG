#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)55;
short var_6 = (short)3034;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)79;
int zero = 0;
unsigned int var_13 = 3145326231U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)46301;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
