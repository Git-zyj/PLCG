#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1914086688;
_Bool var_1 = (_Bool)0;
unsigned int var_4 = 2647929224U;
unsigned char var_5 = (unsigned char)197;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)180;
int zero = 0;
unsigned int var_14 = 1408543411U;
short var_15 = (short)1477;
unsigned short var_16 = (unsigned short)34228;
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
