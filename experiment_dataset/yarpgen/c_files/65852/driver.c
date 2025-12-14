#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62633;
unsigned int var_5 = 2399710469U;
unsigned char var_6 = (unsigned char)185;
long long int var_8 = -5804495430907843679LL;
int zero = 0;
short var_13 = (short)24181;
signed char var_14 = (signed char)-124;
short var_15 = (short)16623;
long long int var_16 = -162492347041406785LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
