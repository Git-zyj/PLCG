#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)241;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)42923;
int zero = 0;
signed char var_13 = (signed char)65;
short var_14 = (short)27428;
_Bool var_15 = (_Bool)0;
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
