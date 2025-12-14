#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned long long int var_1 = 4963320586607864958ULL;
int var_7 = -89239378;
unsigned char var_8 = (unsigned char)4;
long long int var_11 = -4609419289930242656LL;
int zero = 0;
unsigned char var_14 = (unsigned char)195;
signed char var_15 = (signed char)33;
unsigned short var_16 = (unsigned short)53605;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
