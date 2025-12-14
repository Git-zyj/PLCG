#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned short var_1 = (unsigned short)51747;
unsigned short var_5 = (unsigned short)44866;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 2388506398U;
int zero = 0;
unsigned char var_10 = (unsigned char)163;
unsigned char var_11 = (unsigned char)1;
unsigned char var_12 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
