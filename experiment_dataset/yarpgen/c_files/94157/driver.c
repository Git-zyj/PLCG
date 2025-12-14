#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_6 = (unsigned short)48881;
unsigned long long int var_8 = 17842504736277030990ULL;
unsigned short var_9 = (unsigned short)35118;
unsigned long long int var_12 = 277796979214791578ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)192;
unsigned long long int var_14 = 10067404967652157534ULL;
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
