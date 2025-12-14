#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21690;
unsigned char var_5 = (unsigned char)177;
unsigned int var_9 = 1071003318U;
unsigned short var_10 = (unsigned short)53230;
unsigned int var_12 = 559150261U;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_17 = -1785428439;
unsigned short var_18 = (unsigned short)46844;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
