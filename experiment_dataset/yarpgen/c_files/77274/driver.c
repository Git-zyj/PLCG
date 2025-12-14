#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
int var_3 = -1611994264;
long long int var_6 = 6865900069130570356LL;
signed char var_12 = (signed char)104;
unsigned char var_15 = (unsigned char)7;
int zero = 0;
unsigned short var_16 = (unsigned short)12304;
short var_17 = (short)18168;
unsigned char var_18 = (unsigned char)145;
long long int var_19 = 1571068991244821033LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
