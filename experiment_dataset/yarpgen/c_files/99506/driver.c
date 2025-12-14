#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1073172471;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)20;
unsigned char var_16 = (unsigned char)45;
int zero = 0;
unsigned short var_18 = (unsigned short)57430;
int var_19 = 761335019;
unsigned short var_20 = (unsigned short)2514;
void init() {
}

void checksum() {
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
