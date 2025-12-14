#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32358;
unsigned char var_7 = (unsigned char)106;
unsigned char var_8 = (unsigned char)227;
unsigned short var_14 = (unsigned short)57040;
int zero = 0;
long long int var_19 = 1581930022332972352LL;
unsigned int var_20 = 2367483084U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
