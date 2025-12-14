#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)227;
unsigned short var_3 = (unsigned short)41631;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)49265;
int zero = 0;
unsigned char var_10 = (unsigned char)38;
unsigned short var_11 = (unsigned short)21261;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
