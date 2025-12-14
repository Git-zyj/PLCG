#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19398;
unsigned short var_2 = (unsigned short)39077;
unsigned short var_4 = (unsigned short)3101;
short var_6 = (short)-25693;
int var_7 = 1738378696;
unsigned int var_9 = 1284350764U;
unsigned short var_10 = (unsigned short)7881;
int zero = 0;
unsigned char var_12 = (unsigned char)205;
unsigned char var_13 = (unsigned char)53;
unsigned int var_14 = 1862931137U;
unsigned short var_15 = (unsigned short)9348;
signed char var_16 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
