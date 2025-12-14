#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)38;
unsigned long long int var_5 = 9151328938319261885ULL;
int var_8 = -653436319;
short var_9 = (short)19105;
signed char var_16 = (signed char)-58;
int zero = 0;
unsigned char var_17 = (unsigned char)177;
unsigned char var_18 = (unsigned char)16;
signed char var_19 = (signed char)30;
unsigned char var_20 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
