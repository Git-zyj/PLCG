#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
unsigned char var_3 = (unsigned char)254;
signed char var_5 = (signed char)-21;
unsigned char var_6 = (unsigned char)93;
signed char var_8 = (signed char)-119;
unsigned long long int var_9 = 1356309245035497590ULL;
int zero = 0;
signed char var_10 = (signed char)85;
unsigned char var_11 = (unsigned char)92;
unsigned short var_12 = (unsigned short)51044;
unsigned char var_13 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
