#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51556;
unsigned long long int var_1 = 8329933716608787373ULL;
unsigned char var_9 = (unsigned char)99;
unsigned short var_10 = (unsigned short)58158;
unsigned short var_11 = (unsigned short)33360;
unsigned char var_16 = (unsigned char)53;
int zero = 0;
unsigned int var_17 = 1543343947U;
signed char var_18 = (signed char)-76;
unsigned short var_19 = (unsigned short)28310;
unsigned short var_20 = (unsigned short)46773;
short var_21 = (short)7295;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
