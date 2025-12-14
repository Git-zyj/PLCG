#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28327;
int var_3 = 1053871343;
short var_4 = (short)-14466;
unsigned long long int var_5 = 13912091300815000388ULL;
short var_7 = (short)27243;
unsigned char var_9 = (unsigned char)45;
unsigned int var_10 = 3009644671U;
signed char var_11 = (signed char)50;
short var_12 = (short)20623;
unsigned short var_13 = (unsigned short)6166;
unsigned char var_16 = (unsigned char)228;
int zero = 0;
unsigned char var_17 = (unsigned char)226;
short var_18 = (short)29325;
short var_19 = (short)14038;
void init() {
}

void checksum() {
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
