#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4151;
unsigned short var_2 = (unsigned short)42943;
unsigned short var_10 = (unsigned short)39594;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)60261;
int zero = 0;
unsigned char var_14 = (unsigned char)167;
unsigned char var_15 = (unsigned char)8;
unsigned short var_16 = (unsigned short)44436;
unsigned long long int var_17 = 13548397972669325722ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
