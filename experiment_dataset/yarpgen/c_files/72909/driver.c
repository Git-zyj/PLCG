#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1269803053;
long long int var_3 = 1552713080925349516LL;
long long int var_4 = 8215370042175782356LL;
unsigned int var_6 = 4094920402U;
_Bool var_8 = (_Bool)1;
short var_10 = (short)14702;
int zero = 0;
unsigned short var_14 = (unsigned short)2065;
signed char var_15 = (signed char)-39;
signed char var_16 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
