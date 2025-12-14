#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27891;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)22973;
unsigned char var_15 = (unsigned char)59;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
unsigned int var_18 = 1139399589U;
short var_19 = (short)-6213;
signed char var_20 = (signed char)-127;
unsigned int var_21 = 3178341228U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
