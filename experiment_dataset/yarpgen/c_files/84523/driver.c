#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
unsigned short var_1 = (unsigned short)28645;
unsigned short var_3 = (unsigned short)60534;
signed char var_4 = (signed char)-99;
unsigned long long int var_7 = 17122952076662938087ULL;
long long int var_8 = 2687666202276338248LL;
unsigned long long int var_11 = 8824323113185367962ULL;
signed char var_12 = (signed char)-126;
int zero = 0;
int var_13 = 1463935717;
unsigned long long int var_14 = 2405719465659227112ULL;
unsigned char var_15 = (unsigned char)168;
long long int var_16 = 1858248680011406626LL;
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
