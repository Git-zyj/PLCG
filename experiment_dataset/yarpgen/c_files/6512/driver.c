#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
signed char var_2 = (signed char)21;
signed char var_3 = (signed char)29;
unsigned short var_10 = (unsigned short)45590;
unsigned short var_12 = (unsigned short)61773;
unsigned long long int var_13 = 12455998723280217903ULL;
signed char var_15 = (signed char)-99;
int zero = 0;
short var_19 = (short)-2678;
int var_20 = -579744583;
unsigned int var_21 = 3879899821U;
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
