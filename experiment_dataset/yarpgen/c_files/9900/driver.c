#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)207;
unsigned short var_2 = (unsigned short)57948;
unsigned long long int var_6 = 17024449531922614369ULL;
unsigned int var_7 = 951006577U;
signed char var_10 = (signed char)107;
unsigned short var_13 = (unsigned short)54727;
unsigned char var_16 = (unsigned char)5;
int zero = 0;
int var_19 = 1532847123;
unsigned int var_20 = 1303838384U;
int var_21 = 327503656;
unsigned long long int var_22 = 4758029376807143071ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
