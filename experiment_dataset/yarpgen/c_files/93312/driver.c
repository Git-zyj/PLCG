#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
signed char var_3 = (signed char)121;
unsigned int var_4 = 1726379129U;
unsigned int var_10 = 1311926196U;
unsigned char var_12 = (unsigned char)105;
signed char var_14 = (signed char)123;
int zero = 0;
unsigned char var_17 = (unsigned char)161;
unsigned short var_18 = (unsigned short)56135;
signed char var_19 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
