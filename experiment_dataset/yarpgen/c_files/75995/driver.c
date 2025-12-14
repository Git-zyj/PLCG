#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2651688654300308430LL;
short var_6 = (short)-13729;
long long int var_7 = -7337706093365684017LL;
signed char var_8 = (signed char)-107;
unsigned char var_10 = (unsigned char)253;
int zero = 0;
signed char var_12 = (signed char)(-127 - 1);
unsigned short var_13 = (unsigned short)23934;
unsigned char var_14 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
