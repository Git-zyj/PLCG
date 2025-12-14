#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
signed char var_2 = (signed char)-39;
unsigned char var_3 = (unsigned char)162;
short var_4 = (short)27342;
signed char var_6 = (signed char)-30;
unsigned int var_7 = 3866603990U;
signed char var_9 = (signed char)45;
int zero = 0;
signed char var_10 = (signed char)112;
signed char var_11 = (signed char)-8;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
