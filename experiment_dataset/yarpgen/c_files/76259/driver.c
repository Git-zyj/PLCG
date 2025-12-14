#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)247;
unsigned int var_4 = 1045817213U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)0;
unsigned short var_15 = (unsigned short)9703;
short var_17 = (short)11023;
int zero = 0;
unsigned char var_20 = (unsigned char)171;
int var_21 = 649165243;
int var_22 = 409984546;
signed char var_23 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
