#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-10876;
short var_7 = (short)-20530;
int var_12 = 1452014107;
short var_14 = (short)10072;
int zero = 0;
int var_19 = -1340710362;
unsigned short var_20 = (unsigned short)7230;
unsigned char var_21 = (unsigned char)32;
void init() {
}

void checksum() {
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
