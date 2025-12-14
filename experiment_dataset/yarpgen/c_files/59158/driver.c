#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
_Bool var_2 = (_Bool)1;
long long int var_6 = 3794832541728788660LL;
short var_8 = (short)1761;
signed char var_9 = (signed char)-95;
unsigned char var_10 = (unsigned char)20;
int zero = 0;
short var_12 = (short)22043;
unsigned long long int var_13 = 15887579612161767754ULL;
unsigned char var_14 = (unsigned char)104;
unsigned short var_15 = (unsigned short)23553;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
