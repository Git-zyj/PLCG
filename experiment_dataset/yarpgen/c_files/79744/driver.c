#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1741819113;
signed char var_2 = (signed char)-119;
short var_3 = (short)-12018;
unsigned int var_4 = 287957232U;
signed char var_5 = (signed char)12;
unsigned int var_6 = 1431805453U;
unsigned char var_7 = (unsigned char)24;
short var_8 = (short)1052;
signed char var_9 = (signed char)-89;
unsigned char var_10 = (unsigned char)24;
signed char var_11 = (signed char)-90;
unsigned int var_12 = 2008952328U;
int zero = 0;
unsigned short var_13 = (unsigned short)53199;
short var_14 = (short)-5287;
void init() {
}

void checksum() {
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
