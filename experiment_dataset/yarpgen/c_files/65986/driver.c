#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)32;
unsigned short var_8 = (unsigned short)32453;
short var_13 = (short)-29988;
unsigned int var_14 = 1605328589U;
unsigned char var_17 = (unsigned char)96;
int zero = 0;
unsigned short var_18 = (unsigned short)61284;
unsigned short var_19 = (unsigned short)55735;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
