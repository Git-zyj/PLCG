#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)39;
unsigned short var_3 = (unsigned short)2539;
signed char var_5 = (signed char)63;
signed char var_7 = (signed char)88;
unsigned long long int var_8 = 12517159862283518817ULL;
unsigned short var_13 = (unsigned short)62379;
long long int var_19 = 685680765284275528LL;
int zero = 0;
unsigned char var_20 = (unsigned char)232;
signed char var_21 = (signed char)42;
unsigned char var_22 = (unsigned char)36;
signed char var_23 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
