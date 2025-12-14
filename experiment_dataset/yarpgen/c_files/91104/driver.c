#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15682;
unsigned short var_3 = (unsigned short)48526;
unsigned short var_4 = (unsigned short)45436;
unsigned short var_5 = (unsigned short)37529;
unsigned char var_8 = (unsigned char)221;
unsigned short var_9 = (unsigned short)544;
long long int var_12 = 2595183954310575955LL;
int zero = 0;
unsigned char var_15 = (unsigned char)20;
unsigned int var_16 = 3268836716U;
unsigned int var_17 = 1055695337U;
void init() {
}

void checksum() {
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
