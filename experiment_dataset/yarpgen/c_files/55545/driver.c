#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12974381993202404506ULL;
unsigned char var_5 = (unsigned char)6;
unsigned short var_6 = (unsigned short)11397;
int var_7 = 833965942;
int zero = 0;
unsigned char var_10 = (unsigned char)42;
signed char var_11 = (signed char)21;
unsigned char var_12 = (unsigned char)217;
long long int var_13 = -4927441566253247617LL;
unsigned short var_14 = (unsigned short)53759;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
