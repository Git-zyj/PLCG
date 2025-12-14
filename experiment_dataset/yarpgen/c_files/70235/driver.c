#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)41;
long long int var_11 = -107261593348736206LL;
unsigned char var_12 = (unsigned char)206;
unsigned int var_14 = 2113465454U;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)26659;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
