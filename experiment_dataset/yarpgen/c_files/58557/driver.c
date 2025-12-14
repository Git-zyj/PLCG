#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35927;
unsigned short var_4 = (unsigned short)39196;
unsigned short var_10 = (unsigned short)54076;
unsigned short var_13 = (unsigned short)11414;
unsigned short var_19 = (unsigned short)44521;
int zero = 0;
unsigned char var_20 = (unsigned char)35;
unsigned int var_21 = 369388333U;
unsigned short var_22 = (unsigned short)62157;
unsigned short var_23 = (unsigned short)1306;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
