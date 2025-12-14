#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)39267;
unsigned short var_6 = (unsigned short)5249;
unsigned int var_8 = 603500827U;
unsigned char var_13 = (unsigned char)98;
short var_15 = (short)15461;
short var_16 = (short)30193;
int zero = 0;
unsigned short var_17 = (unsigned short)21725;
signed char var_18 = (signed char)-40;
signed char var_19 = (signed char)7;
unsigned short var_20 = (unsigned short)39949;
unsigned int var_21 = 899177074U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
