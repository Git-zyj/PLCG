#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2615947858021652270ULL;
unsigned int var_6 = 1160059271U;
unsigned long long int var_7 = 3431852208769436985ULL;
unsigned long long int var_9 = 10160150884950292383ULL;
unsigned short var_11 = (unsigned short)18564;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)2;
unsigned char var_17 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
