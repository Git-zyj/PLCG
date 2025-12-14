#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32400;
unsigned char var_4 = (unsigned char)78;
int var_5 = 796257548;
unsigned long long int var_9 = 15963842277575395226ULL;
signed char var_10 = (signed char)-105;
long long int var_12 = 7176379161271645732LL;
unsigned char var_13 = (unsigned char)67;
int var_14 = -454373201;
unsigned char var_15 = (unsigned char)111;
int var_16 = 493664808;
int var_17 = 1511073221;
int zero = 0;
signed char var_18 = (signed char)59;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
