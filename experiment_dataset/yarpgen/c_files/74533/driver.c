#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
short var_4 = (short)14583;
unsigned int var_5 = 2898433059U;
unsigned short var_7 = (unsigned short)65251;
unsigned int var_9 = 1987739556U;
short var_11 = (short)-15571;
int var_14 = 727615224;
signed char var_15 = (signed char)68;
int zero = 0;
int var_16 = -1786500047;
unsigned char var_17 = (unsigned char)60;
unsigned long long int var_18 = 14826313239154577708ULL;
unsigned long long int var_19 = 13248526135016215787ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
