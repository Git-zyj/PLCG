#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16720313021542419530ULL;
unsigned char var_7 = (unsigned char)53;
unsigned char var_9 = (unsigned char)169;
unsigned char var_10 = (unsigned char)224;
short var_11 = (short)-2666;
unsigned short var_13 = (unsigned short)25281;
signed char var_16 = (signed char)36;
int zero = 0;
signed char var_17 = (signed char)45;
unsigned int var_18 = 3145721681U;
long long int var_19 = 5903649380321673518LL;
unsigned int var_20 = 432306235U;
unsigned char var_21 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
