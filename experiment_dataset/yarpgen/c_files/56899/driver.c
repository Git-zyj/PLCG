#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
signed char var_2 = (signed char)114;
unsigned char var_3 = (unsigned char)12;
unsigned char var_5 = (unsigned char)3;
signed char var_6 = (signed char)12;
unsigned char var_7 = (unsigned char)205;
signed char var_8 = (signed char)-48;
signed char var_9 = (signed char)-63;
unsigned char var_10 = (unsigned char)209;
unsigned char var_11 = (unsigned char)251;
int zero = 0;
signed char var_13 = (signed char)87;
unsigned char var_14 = (unsigned char)193;
unsigned char var_15 = (unsigned char)58;
unsigned char var_16 = (unsigned char)97;
signed char var_17 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
