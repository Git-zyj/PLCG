#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1552690712;
short var_1 = (short)-29003;
unsigned long long int var_2 = 4591707402699662659ULL;
long long int var_3 = -4460589750146293174LL;
unsigned int var_4 = 2958405545U;
unsigned char var_5 = (unsigned char)7;
signed char var_8 = (signed char)24;
signed char var_10 = (signed char)-115;
int zero = 0;
unsigned long long int var_11 = 4879784950306980571ULL;
unsigned int var_12 = 463893914U;
signed char var_13 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
