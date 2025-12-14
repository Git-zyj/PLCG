#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61729;
unsigned char var_6 = (unsigned char)179;
unsigned short var_12 = (unsigned short)57128;
int zero = 0;
short var_19 = (short)-32541;
unsigned short var_20 = (unsigned short)18007;
unsigned short var_21 = (unsigned short)17693;
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
