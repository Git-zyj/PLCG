#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29364;
long long int var_1 = 6443700541855408428LL;
long long int var_2 = -3364392602706273335LL;
unsigned short var_3 = (unsigned short)11066;
long long int var_5 = -3764157189143885488LL;
unsigned short var_7 = (unsigned short)35917;
int var_8 = 213558030;
long long int var_9 = -3980536924824973572LL;
int zero = 0;
signed char var_11 = (signed char)-127;
unsigned int var_12 = 2361434394U;
unsigned char var_13 = (unsigned char)187;
signed char var_14 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
