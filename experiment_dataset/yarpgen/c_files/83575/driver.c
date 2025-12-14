#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 722111453;
signed char var_2 = (signed char)7;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-2668;
unsigned int var_6 = 486374904U;
short var_10 = (short)-24125;
unsigned long long int var_11 = 5995945500878829805ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_16 = 1758521392U;
unsigned short var_17 = (unsigned short)57893;
unsigned char var_18 = (unsigned char)206;
int zero = 0;
int var_20 = -861519469;
int var_21 = 105034900;
unsigned short var_22 = (unsigned short)14580;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
