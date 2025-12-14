#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26750;
unsigned char var_7 = (unsigned char)142;
long long int var_10 = 9148208803677066219LL;
unsigned short var_15 = (unsigned short)1604;
int zero = 0;
unsigned char var_19 = (unsigned char)53;
_Bool var_20 = (_Bool)1;
short var_21 = (short)31092;
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
