#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned char var_3 = (unsigned char)182;
unsigned char var_4 = (unsigned char)205;
unsigned char var_6 = (unsigned char)153;
long long int var_9 = 381566719873476731LL;
int zero = 0;
unsigned char var_13 = (unsigned char)86;
long long int var_14 = 7375601385204971248LL;
long long int var_15 = 4490762664911126945LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
