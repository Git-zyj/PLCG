#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned long long int var_3 = 12661001818020136146ULL;
signed char var_6 = (signed char)104;
unsigned char var_8 = (unsigned char)58;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)92;
unsigned char var_15 = (unsigned char)115;
int zero = 0;
signed char var_16 = (signed char)127;
unsigned long long int var_17 = 1385658104907595543ULL;
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
