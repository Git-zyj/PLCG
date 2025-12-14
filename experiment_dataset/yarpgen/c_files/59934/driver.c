#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23703;
signed char var_3 = (signed char)-75;
unsigned short var_5 = (unsigned short)46528;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-27;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)46;
int var_15 = 2109585934;
unsigned char var_16 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
