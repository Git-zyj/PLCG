#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5996305888941901602LL;
long long int var_10 = 9095247965159477107LL;
unsigned short var_12 = (unsigned short)55322;
short var_14 = (short)-20791;
int zero = 0;
long long int var_19 = 644799649421054186LL;
short var_20 = (short)-24550;
unsigned int var_21 = 4114932376U;
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
