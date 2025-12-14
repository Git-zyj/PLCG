#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3302503436784423876LL;
unsigned long long int var_1 = 686925884261907880ULL;
signed char var_2 = (signed char)122;
signed char var_3 = (signed char)-99;
unsigned char var_4 = (unsigned char)252;
short var_5 = (short)21754;
unsigned char var_6 = (unsigned char)103;
short var_7 = (short)-9147;
unsigned short var_9 = (unsigned short)24407;
short var_10 = (short)-29966;
unsigned char var_11 = (unsigned char)214;
int zero = 0;
long long int var_12 = -5335555607798364268LL;
short var_13 = (short)27774;
int var_14 = 1655546434;
void init() {
}

void checksum() {
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
