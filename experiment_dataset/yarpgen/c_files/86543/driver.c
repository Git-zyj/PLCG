#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12692;
unsigned char var_8 = (unsigned char)83;
signed char var_9 = (signed char)-86;
signed char var_11 = (signed char)-55;
unsigned char var_12 = (unsigned char)220;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8183704076323194892LL;
unsigned int var_16 = 1337688388U;
signed char var_17 = (signed char)111;
int zero = 0;
unsigned char var_19 = (unsigned char)64;
unsigned char var_20 = (unsigned char)164;
unsigned int var_21 = 2932169141U;
void init() {
}

void checksum() {
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
