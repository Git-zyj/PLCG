#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned short var_2 = (unsigned short)15162;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)2;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)227;
long long int var_13 = 5648441258849109258LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
