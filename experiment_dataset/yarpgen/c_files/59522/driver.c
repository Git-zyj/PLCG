#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3267048654921320291ULL;
signed char var_9 = (signed char)-67;
unsigned short var_10 = (unsigned short)50014;
unsigned char var_14 = (unsigned char)42;
int zero = 0;
unsigned char var_19 = (unsigned char)178;
int var_20 = 1541605415;
long long int var_21 = -4503448905260219224LL;
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
