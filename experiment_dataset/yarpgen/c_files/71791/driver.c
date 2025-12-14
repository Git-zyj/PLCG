#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2216;
unsigned char var_3 = (unsigned char)84;
unsigned char var_5 = (unsigned char)167;
unsigned char var_7 = (unsigned char)150;
unsigned char var_8 = (unsigned char)228;
unsigned char var_11 = (unsigned char)219;
int zero = 0;
unsigned char var_12 = (unsigned char)133;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)87;
void init() {
}

void checksum() {
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
