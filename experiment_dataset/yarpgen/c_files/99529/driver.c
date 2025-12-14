#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
unsigned long long int var_2 = 15432024385324988351ULL;
unsigned short var_3 = (unsigned short)58821;
long long int var_7 = -7519320803006453113LL;
unsigned long long int var_13 = 18288393492944236023ULL;
unsigned short var_14 = (unsigned short)63668;
unsigned short var_18 = (unsigned short)58156;
int zero = 0;
unsigned char var_19 = (unsigned char)167;
unsigned int var_20 = 2275301601U;
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
