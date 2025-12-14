#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 167037823U;
unsigned char var_3 = (unsigned char)172;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)177;
unsigned int var_8 = 4272643000U;
signed char var_9 = (signed char)77;
unsigned char var_15 = (unsigned char)138;
unsigned long long int var_16 = 694997462283167927ULL;
unsigned long long int var_17 = 12752973822144787624ULL;
int zero = 0;
signed char var_20 = (signed char)127;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)2821;
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
