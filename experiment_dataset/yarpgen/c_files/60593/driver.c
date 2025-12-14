#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)15;
int var_5 = 1966543069;
unsigned char var_7 = (unsigned char)53;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)33583;
unsigned int var_13 = 2324989561U;
int var_18 = 1847566084;
int zero = 0;
unsigned int var_19 = 4231991337U;
unsigned short var_20 = (unsigned short)18438;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
