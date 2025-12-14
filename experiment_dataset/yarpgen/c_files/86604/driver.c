#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12288070005314049580ULL;
long long int var_1 = -7578456236921241298LL;
short var_2 = (short)-4007;
long long int var_5 = 6674483780708898416LL;
unsigned char var_6 = (unsigned char)250;
int var_7 = 1516266610;
int var_9 = 1348205254;
int var_10 = -1229973852;
signed char var_11 = (signed char)-48;
unsigned long long int var_16 = 12676369751736578334ULL;
int zero = 0;
long long int var_17 = -6691397929870820150LL;
long long int var_18 = 2361860997611901041LL;
unsigned char var_19 = (unsigned char)54;
signed char var_20 = (signed char)90;
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
