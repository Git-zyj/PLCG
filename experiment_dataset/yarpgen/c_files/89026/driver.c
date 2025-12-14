#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned int var_1 = 1951453731U;
short var_2 = (short)-13478;
unsigned int var_3 = 3836781542U;
unsigned short var_4 = (unsigned short)64329;
unsigned int var_5 = 10728737U;
short var_8 = (short)589;
int var_9 = -1351333698;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 821514979;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
