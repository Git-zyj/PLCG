#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)11536;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)206;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -1841793241;
unsigned short var_15 = (unsigned short)23245;
unsigned short var_16 = (unsigned short)658;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
