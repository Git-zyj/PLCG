#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
unsigned char var_1 = (unsigned char)1;
unsigned short var_4 = (unsigned short)14230;
int var_6 = -1070463162;
unsigned short var_7 = (unsigned short)3494;
unsigned short var_12 = (unsigned short)24371;
unsigned short var_16 = (unsigned short)61206;
int zero = 0;
unsigned short var_17 = (unsigned short)3749;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)129;
int var_20 = 2102517406;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
