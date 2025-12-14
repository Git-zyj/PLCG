#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)235;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-104;
unsigned long long int var_7 = 5926575980752755856ULL;
signed char var_9 = (signed char)44;
unsigned short var_10 = (unsigned short)5923;
int zero = 0;
unsigned char var_11 = (unsigned char)46;
unsigned long long int var_12 = 17677747559020750685ULL;
signed char var_13 = (signed char)-6;
unsigned int var_14 = 2696814672U;
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
