#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39620;
signed char var_2 = (signed char)19;
int var_3 = 638091147;
unsigned char var_4 = (unsigned char)81;
unsigned int var_5 = 797996932U;
int var_6 = -610930546;
unsigned char var_10 = (unsigned char)123;
int zero = 0;
unsigned short var_11 = (unsigned short)1927;
unsigned char var_12 = (unsigned char)169;
unsigned short var_13 = (unsigned short)11930;
unsigned char var_14 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
