#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 284921599U;
unsigned short var_3 = (unsigned short)28820;
unsigned short var_7 = (unsigned short)59708;
int zero = 0;
signed char var_10 = (signed char)126;
unsigned char var_11 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
