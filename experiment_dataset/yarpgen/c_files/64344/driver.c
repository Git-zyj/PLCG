#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39631;
unsigned char var_2 = (unsigned char)15;
long long int var_3 = -3990476307460829272LL;
unsigned int var_5 = 1769622602U;
unsigned short var_7 = (unsigned short)63248;
int zero = 0;
unsigned char var_13 = (unsigned char)220;
short var_14 = (short)-32318;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
