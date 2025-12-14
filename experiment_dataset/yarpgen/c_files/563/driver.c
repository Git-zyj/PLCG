#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 20225924U;
long long int var_3 = -9199792569947119236LL;
unsigned char var_5 = (unsigned char)48;
_Bool var_6 = (_Bool)1;
int var_8 = -1651899717;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)52632;
unsigned long long int var_12 = 14883504223794735649ULL;
void init() {
}

void checksum() {
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
