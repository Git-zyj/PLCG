#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)45816;
unsigned short var_3 = (unsigned short)15722;
unsigned short var_4 = (unsigned short)52199;
long long int var_6 = 9182293481696619537LL;
int zero = 0;
unsigned int var_12 = 2818111205U;
unsigned char var_13 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
