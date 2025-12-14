#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)243;
unsigned char var_4 = (unsigned char)130;
signed char var_5 = (signed char)37;
int var_10 = 1564234282;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)73;
unsigned short var_22 = (unsigned short)15590;
void init() {
}

void checksum() {
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
