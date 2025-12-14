#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)28;
unsigned char var_6 = (unsigned char)81;
int var_12 = -635984216;
int zero = 0;
unsigned char var_17 = (unsigned char)52;
unsigned long long int var_18 = 16738770744592875130ULL;
unsigned short var_19 = (unsigned short)58741;
long long int var_20 = -4325528182762640339LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
