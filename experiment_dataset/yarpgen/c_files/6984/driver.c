#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
long long int var_3 = -2488024569196639504LL;
unsigned short var_8 = (unsigned short)51190;
int zero = 0;
unsigned short var_10 = (unsigned short)34960;
signed char var_11 = (signed char)-107;
long long int var_12 = -4158413487591499811LL;
unsigned short var_13 = (unsigned short)33607;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
