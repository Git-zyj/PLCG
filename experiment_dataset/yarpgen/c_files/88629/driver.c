#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
int var_1 = 632685742;
long long int var_2 = 6002011260739515705LL;
long long int var_3 = -3357674482754108995LL;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)155;
int zero = 0;
int var_14 = 1199678704;
short var_15 = (short)-20207;
_Bool var_16 = (_Bool)1;
long long int var_17 = 69289452420605440LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
