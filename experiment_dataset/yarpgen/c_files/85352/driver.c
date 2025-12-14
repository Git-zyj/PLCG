#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31373;
unsigned long long int var_2 = 17518647041510867730ULL;
unsigned short var_4 = (unsigned short)63646;
unsigned char var_5 = (unsigned char)174;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 352265021947223338ULL;
unsigned short var_8 = (unsigned short)45216;
long long int var_9 = 3772302376707674677LL;
unsigned short var_12 = (unsigned short)18623;
int zero = 0;
unsigned short var_13 = (unsigned short)13203;
unsigned char var_14 = (unsigned char)201;
unsigned char var_15 = (unsigned char)215;
unsigned long long int var_16 = 14863953628583831260ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
