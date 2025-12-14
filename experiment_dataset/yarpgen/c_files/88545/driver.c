#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)179;
unsigned char var_5 = (unsigned char)9;
unsigned short var_9 = (unsigned short)53527;
signed char var_12 = (signed char)44;
int zero = 0;
unsigned short var_18 = (unsigned short)25212;
unsigned int var_19 = 3170995803U;
int var_20 = -1278964909;
unsigned long long int var_21 = 10003216227710537503ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
