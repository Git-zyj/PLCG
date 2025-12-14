#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57506;
unsigned int var_3 = 4189565828U;
signed char var_4 = (signed char)82;
signed char var_5 = (signed char)40;
unsigned char var_8 = (unsigned char)4;
int zero = 0;
unsigned char var_14 = (unsigned char)40;
unsigned char var_15 = (unsigned char)91;
unsigned char var_16 = (unsigned char)54;
unsigned short var_17 = (unsigned short)31322;
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
