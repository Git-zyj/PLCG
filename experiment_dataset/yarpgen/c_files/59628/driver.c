#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8175326041356737655LL;
signed char var_1 = (signed char)24;
unsigned short var_2 = (unsigned short)46073;
short var_6 = (short)14314;
unsigned char var_8 = (unsigned char)106;
int zero = 0;
unsigned int var_10 = 3854241468U;
long long int var_11 = -1494984546029032045LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
