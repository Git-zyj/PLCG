#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 817248344U;
unsigned long long int var_8 = 2114038226485271636ULL;
unsigned short var_9 = (unsigned short)22397;
unsigned char var_13 = (unsigned char)208;
int zero = 0;
unsigned short var_16 = (unsigned short)63846;
unsigned long long int var_17 = 6241252644423046627ULL;
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
