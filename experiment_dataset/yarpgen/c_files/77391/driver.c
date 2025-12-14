#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1024;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)162;
unsigned short var_6 = (unsigned short)45383;
unsigned char var_7 = (unsigned char)98;
unsigned short var_8 = (unsigned short)46792;
signed char var_11 = (signed char)25;
int zero = 0;
unsigned short var_16 = (unsigned short)15584;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
