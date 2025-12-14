#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46829;
unsigned char var_3 = (unsigned char)157;
unsigned short var_5 = (unsigned short)59875;
unsigned short var_6 = (unsigned short)59091;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)229;
int zero = 0;
unsigned char var_13 = (unsigned char)172;
unsigned char var_14 = (unsigned char)225;
int var_15 = 665508618;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
