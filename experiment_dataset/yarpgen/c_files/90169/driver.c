#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -1206759389;
unsigned char var_4 = (unsigned char)245;
unsigned long long int var_6 = 17095461644289021566ULL;
short var_7 = (short)-10747;
int zero = 0;
unsigned short var_10 = (unsigned short)12660;
unsigned short var_11 = (unsigned short)31549;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
