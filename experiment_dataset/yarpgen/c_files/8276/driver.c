#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18383184057365144362ULL;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)126;
int zero = 0;
unsigned short var_15 = (unsigned short)22102;
short var_16 = (short)-29802;
void init() {
}

void checksum() {
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
