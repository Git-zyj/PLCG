#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4498535077039286713LL;
unsigned short var_7 = (unsigned short)48992;
unsigned short var_8 = (unsigned short)7086;
int zero = 0;
short var_12 = (short)-6685;
unsigned int var_13 = 129870539U;
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
