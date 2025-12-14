#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3585368159237511865LL;
unsigned char var_4 = (unsigned char)8;
unsigned char var_10 = (unsigned char)180;
short var_14 = (short)-5423;
int zero = 0;
unsigned short var_19 = (unsigned short)28789;
unsigned long long int var_20 = 4826406586666046812ULL;
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
