#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 330823705;
unsigned char var_4 = (unsigned char)102;
signed char var_5 = (signed char)125;
unsigned short var_8 = (unsigned short)5758;
int zero = 0;
int var_11 = 1217287121;
unsigned short var_12 = (unsigned short)59215;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
