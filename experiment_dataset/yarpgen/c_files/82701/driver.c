#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16288;
unsigned char var_4 = (unsigned char)147;
short var_5 = (short)16941;
unsigned short var_6 = (unsigned short)49637;
int zero = 0;
signed char var_11 = (signed char)-84;
int var_12 = -34678330;
signed char var_13 = (signed char)89;
int var_14 = -1376036333;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
