#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)13496;
short var_9 = (short)-26855;
unsigned long long int var_12 = 18023545151909248683ULL;
unsigned short var_14 = (unsigned short)27972;
unsigned char var_17 = (unsigned char)133;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = -1357029257;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)178;
void init() {
}

void checksum() {
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
