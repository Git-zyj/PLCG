#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -923958716;
unsigned char var_2 = (unsigned char)219;
int var_3 = 321934041;
unsigned char var_5 = (unsigned char)97;
signed char var_8 = (signed char)-90;
unsigned char var_9 = (unsigned char)86;
long long int var_14 = 2453136371567283321LL;
unsigned int var_18 = 496533077U;
int zero = 0;
unsigned short var_19 = (unsigned short)4245;
int var_20 = -1656140866;
unsigned char var_21 = (unsigned char)5;
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
