#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8948;
unsigned char var_4 = (unsigned char)162;
short var_6 = (short)7629;
unsigned short var_9 = (unsigned short)21811;
int zero = 0;
signed char var_11 = (signed char)74;
long long int var_12 = -8534973830929344109LL;
void init() {
}

void checksum() {
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
