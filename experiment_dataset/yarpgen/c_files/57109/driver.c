#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3710612287U;
unsigned char var_1 = (unsigned char)208;
unsigned int var_4 = 1993842148U;
signed char var_6 = (signed char)-87;
unsigned char var_7 = (unsigned char)10;
unsigned short var_8 = (unsigned short)4347;
long long int var_10 = 5548874237387851152LL;
unsigned short var_11 = (unsigned short)33237;
unsigned char var_12 = (unsigned char)236;
int var_13 = 367888567;
int zero = 0;
signed char var_14 = (signed char)-11;
long long int var_15 = 4263526814991046424LL;
signed char var_16 = (signed char)-75;
unsigned char var_17 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
