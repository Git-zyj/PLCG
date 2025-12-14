#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
signed char var_5 = (signed char)-5;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 14157845657627925502ULL;
unsigned short var_9 = (unsigned short)33926;
int var_11 = 2030226531;
unsigned char var_12 = (unsigned char)50;
int zero = 0;
unsigned short var_13 = (unsigned short)22442;
unsigned int var_14 = 4244187382U;
void init() {
}

void checksum() {
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
