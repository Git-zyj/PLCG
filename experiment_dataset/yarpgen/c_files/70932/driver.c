#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)44;
unsigned char var_2 = (unsigned char)165;
int var_6 = 1998765006;
unsigned short var_8 = (unsigned short)16709;
unsigned int var_12 = 851007696U;
short var_14 = (short)26117;
int zero = 0;
unsigned long long int var_18 = 12124350157415268227ULL;
unsigned char var_19 = (unsigned char)99;
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
