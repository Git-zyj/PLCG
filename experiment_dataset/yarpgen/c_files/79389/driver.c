#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3859939370U;
short var_4 = (short)26621;
short var_5 = (short)-14847;
unsigned char var_6 = (unsigned char)127;
int var_16 = -596166313;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 927332914U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
