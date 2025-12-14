#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12143;
_Bool var_6 = (_Bool)0;
unsigned char var_13 = (unsigned char)97;
unsigned char var_14 = (unsigned char)26;
unsigned short var_18 = (unsigned short)64739;
int zero = 0;
short var_19 = (short)-9412;
unsigned char var_20 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
