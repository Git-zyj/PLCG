#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
int var_8 = 712647046;
unsigned char var_10 = (unsigned char)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-36;
unsigned short var_16 = (unsigned short)34488;
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
