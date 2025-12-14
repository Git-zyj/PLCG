#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54044;
long long int var_4 = -7672993526352673962LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)30;
unsigned short var_18 = (unsigned short)47585;
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
