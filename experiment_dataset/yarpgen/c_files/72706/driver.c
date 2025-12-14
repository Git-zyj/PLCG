#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27545;
unsigned short var_2 = (unsigned short)53093;
unsigned char var_3 = (unsigned char)107;
long long int var_10 = -3690947930723631367LL;
int zero = 0;
signed char var_11 = (signed char)-14;
unsigned char var_12 = (unsigned char)64;
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
