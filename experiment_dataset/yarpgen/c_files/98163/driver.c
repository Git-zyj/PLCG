#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43627;
short var_4 = (short)6245;
short var_5 = (short)-13189;
unsigned short var_6 = (unsigned short)29066;
unsigned char var_7 = (unsigned char)61;
unsigned int var_12 = 2968523628U;
unsigned char var_13 = (unsigned char)181;
int var_15 = 1722532437;
long long int var_16 = 3824157935638246111LL;
int zero = 0;
unsigned long long int var_20 = 15593086307452399038ULL;
signed char var_21 = (signed char)19;
unsigned long long int var_22 = 3859036478128628687ULL;
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
