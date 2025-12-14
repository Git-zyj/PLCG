#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27191;
long long int var_4 = -5471491869027661287LL;
unsigned int var_5 = 1889771950U;
unsigned int var_6 = 2349796728U;
unsigned int var_7 = 2283031U;
int var_8 = -746176917;
unsigned char var_11 = (unsigned char)2;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)33;
unsigned char var_20 = (unsigned char)224;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
