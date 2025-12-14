#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53142;
unsigned char var_12 = (unsigned char)130;
unsigned char var_13 = (unsigned char)147;
int zero = 0;
long long int var_17 = 889647563191258130LL;
unsigned long long int var_18 = 1227711394435719324ULL;
int var_19 = 641972363;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
