#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 189762683U;
unsigned long long int var_3 = 18435064645048094634ULL;
unsigned short var_8 = (unsigned short)47024;
unsigned char var_9 = (unsigned char)120;
unsigned short var_10 = (unsigned short)15731;
unsigned short var_14 = (unsigned short)26386;
int zero = 0;
unsigned short var_20 = (unsigned short)23008;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)195;
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
