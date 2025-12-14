#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59765;
unsigned char var_1 = (unsigned char)133;
unsigned short var_6 = (unsigned short)46837;
unsigned int var_11 = 3018896836U;
int zero = 0;
short var_18 = (short)-7608;
long long int var_19 = 8328595794470764239LL;
unsigned char var_20 = (unsigned char)103;
unsigned short var_21 = (unsigned short)37467;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
