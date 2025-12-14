#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56766;
signed char var_5 = (signed char)-73;
unsigned short var_8 = (unsigned short)27531;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)65246;
unsigned short var_12 = (unsigned short)47156;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
