#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)35230;
unsigned char var_10 = (unsigned char)212;
long long int var_11 = -3056319007252112201LL;
unsigned short var_12 = (unsigned short)64620;
int zero = 0;
unsigned char var_18 = (unsigned char)0;
unsigned char var_19 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
