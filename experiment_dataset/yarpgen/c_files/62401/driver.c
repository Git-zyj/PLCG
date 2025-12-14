#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12699;
unsigned short var_2 = (unsigned short)64559;
unsigned int var_6 = 3080148374U;
signed char var_10 = (signed char)-102;
unsigned short var_12 = (unsigned short)54531;
unsigned char var_14 = (unsigned char)113;
int zero = 0;
long long int var_18 = -7234261163989552735LL;
short var_19 = (short)19048;
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
