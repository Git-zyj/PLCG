#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1087;
unsigned char var_3 = (unsigned char)128;
long long int var_6 = -1591795018221147895LL;
signed char var_7 = (signed char)-125;
unsigned char var_12 = (unsigned char)16;
int var_13 = 743396155;
short var_15 = (short)14728;
int zero = 0;
int var_20 = -254471699;
short var_21 = (short)24442;
void init() {
}

void checksum() {
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
