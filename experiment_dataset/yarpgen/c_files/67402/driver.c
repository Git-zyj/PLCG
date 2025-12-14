#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
short var_2 = (short)1781;
unsigned char var_3 = (unsigned char)108;
signed char var_5 = (signed char)-61;
unsigned char var_6 = (unsigned char)240;
signed char var_7 = (signed char)27;
unsigned short var_8 = (unsigned short)16976;
signed char var_9 = (signed char)-46;
int zero = 0;
unsigned char var_10 = (unsigned char)126;
unsigned short var_11 = (unsigned short)52479;
int var_12 = 1374893139;
unsigned short var_13 = (unsigned short)25269;
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
