#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)57;
unsigned short var_5 = (unsigned short)2850;
unsigned char var_7 = (unsigned char)74;
int var_11 = -404292051;
long long int var_12 = 8155928298844900483LL;
unsigned int var_14 = 614572781U;
int zero = 0;
signed char var_20 = (signed char)29;
int var_21 = -1764140417;
unsigned char var_22 = (unsigned char)27;
int var_23 = 400576907;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
