#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1996504137;
signed char var_4 = (signed char)-66;
unsigned long long int var_8 = 7003995371886776053ULL;
unsigned short var_15 = (unsigned short)19293;
unsigned int var_19 = 2850152086U;
int zero = 0;
unsigned short var_20 = (unsigned short)42118;
unsigned short var_21 = (unsigned short)31963;
unsigned char var_22 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
