#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 2737876777U;
long long int var_9 = 6841060337629434286LL;
unsigned int var_11 = 105655429U;
int var_16 = 704933408;
int zero = 0;
unsigned short var_19 = (unsigned short)31054;
unsigned char var_20 = (unsigned char)88;
unsigned int var_21 = 844978072U;
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
