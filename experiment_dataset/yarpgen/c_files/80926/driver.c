#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63403;
signed char var_5 = (signed char)83;
long long int var_10 = 1517213574488818626LL;
int zero = 0;
unsigned char var_12 = (unsigned char)79;
unsigned int var_13 = 4236406797U;
int var_14 = 2072284545;
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
