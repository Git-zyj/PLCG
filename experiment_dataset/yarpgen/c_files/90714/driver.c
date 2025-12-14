#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12304;
int var_5 = 635639959;
unsigned int var_8 = 2146458813U;
int zero = 0;
int var_19 = 1528004368;
unsigned short var_20 = (unsigned short)53313;
long long int var_21 = 5377980599568102712LL;
unsigned int var_22 = 1851692375U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
