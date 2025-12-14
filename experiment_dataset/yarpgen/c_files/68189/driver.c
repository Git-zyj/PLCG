#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1553332727;
int var_2 = -993495447;
unsigned short var_3 = (unsigned short)49382;
short var_6 = (short)-27710;
unsigned short var_9 = (unsigned short)29977;
unsigned short var_10 = (unsigned short)14904;
unsigned short var_13 = (unsigned short)41243;
_Bool var_18 = (_Bool)0;
int var_19 = 998370378;
int zero = 0;
unsigned short var_20 = (unsigned short)667;
unsigned short var_21 = (unsigned short)21300;
short var_22 = (short)-8518;
void init() {
}

void checksum() {
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
