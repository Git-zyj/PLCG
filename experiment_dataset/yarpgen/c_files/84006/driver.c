#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7337;
signed char var_2 = (signed char)97;
unsigned long long int var_3 = 12041652100477213216ULL;
signed char var_12 = (signed char)118;
unsigned long long int var_14 = 12305488742109470224ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)14;
short var_19 = (short)-27320;
unsigned short var_20 = (unsigned short)31461;
unsigned long long int var_21 = 287337729618926644ULL;
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
