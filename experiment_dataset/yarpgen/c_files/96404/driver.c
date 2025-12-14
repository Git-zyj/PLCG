#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23737;
short var_4 = (short)774;
unsigned char var_6 = (unsigned char)90;
unsigned char var_7 = (unsigned char)197;
unsigned short var_8 = (unsigned short)52721;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)114;
short var_12 = (short)-9367;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
