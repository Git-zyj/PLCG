#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_6 = 3952961998719640082LL;
unsigned short var_7 = (unsigned short)16287;
unsigned short var_9 = (unsigned short)8437;
unsigned char var_10 = (unsigned char)78;
int zero = 0;
signed char var_12 = (signed char)-125;
unsigned short var_13 = (unsigned short)16256;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
