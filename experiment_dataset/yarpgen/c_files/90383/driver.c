#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
int var_4 = -384273175;
unsigned char var_9 = (unsigned char)51;
long long int var_11 = -7806717572573497314LL;
unsigned short var_16 = (unsigned short)8640;
signed char var_17 = (signed char)-30;
int zero = 0;
long long int var_19 = -5792825171824665905LL;
signed char var_20 = (signed char)-48;
unsigned short var_21 = (unsigned short)42751;
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
