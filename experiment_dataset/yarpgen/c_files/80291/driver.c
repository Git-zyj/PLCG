#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6147;
long long int var_6 = 8588738838100922914LL;
unsigned int var_8 = 151674688U;
unsigned short var_10 = (unsigned short)4580;
unsigned char var_12 = (unsigned char)173;
int zero = 0;
unsigned short var_20 = (unsigned short)40948;
unsigned short var_21 = (unsigned short)51838;
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
