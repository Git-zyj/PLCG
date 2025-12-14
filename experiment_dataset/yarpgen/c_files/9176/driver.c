#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28706;
signed char var_1 = (signed char)-115;
long long int var_2 = 543887033795461652LL;
long long int var_4 = -7189048847651164011LL;
signed char var_9 = (signed char)61;
_Bool var_10 = (_Bool)1;
unsigned short var_15 = (unsigned short)592;
int zero = 0;
signed char var_20 = (signed char)-30;
signed char var_21 = (signed char)-32;
void init() {
}

void checksum() {
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
