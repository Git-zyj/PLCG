#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 836567977;
unsigned long long int var_1 = 5051772914572154881ULL;
_Bool var_5 = (_Bool)1;
int var_10 = 2028163666;
unsigned int var_11 = 3587764986U;
unsigned int var_12 = 3192462358U;
unsigned long long int var_16 = 13273579178368733165ULL;
unsigned char var_17 = (unsigned char)24;
int zero = 0;
unsigned char var_19 = (unsigned char)44;
unsigned long long int var_20 = 12431556545155415419ULL;
unsigned char var_21 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
