#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)14;
long long int var_8 = 2070127882057431235LL;
unsigned short var_18 = (unsigned short)43203;
int zero = 0;
unsigned int var_20 = 3802628292U;
long long int var_21 = -853016061791895300LL;
void init() {
}

void checksum() {
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
