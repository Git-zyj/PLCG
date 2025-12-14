#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52740;
long long int var_4 = 1384147121528558369LL;
unsigned short var_6 = (unsigned short)64681;
unsigned short var_7 = (unsigned short)60769;
unsigned char var_9 = (unsigned char)8;
int zero = 0;
short var_10 = (short)-23215;
long long int var_11 = -5818467697041058922LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
