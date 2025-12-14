#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1859465418;
int var_3 = 508684042;
_Bool var_4 = (_Bool)0;
long long int var_6 = 7363780448481346591LL;
short var_7 = (short)-25217;
unsigned short var_8 = (unsigned short)63384;
signed char var_10 = (signed char)24;
int zero = 0;
unsigned char var_11 = (unsigned char)1;
unsigned char var_12 = (unsigned char)1;
void init() {
}

void checksum() {
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
