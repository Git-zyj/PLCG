#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12670;
unsigned short var_5 = (unsigned short)52209;
int var_7 = 1731599281;
unsigned char var_9 = (unsigned char)220;
unsigned int var_11 = 809669203U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)110;
unsigned int var_16 = 4740451U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
