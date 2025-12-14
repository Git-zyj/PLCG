#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17089;
unsigned char var_1 = (unsigned char)206;
unsigned long long int var_4 = 7746918252016201764ULL;
_Bool var_6 = (_Bool)1;
short var_9 = (short)3527;
unsigned char var_13 = (unsigned char)116;
short var_16 = (short)-30966;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
