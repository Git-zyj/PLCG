#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4121168913U;
unsigned short var_1 = (unsigned short)42329;
unsigned short var_2 = (unsigned short)29333;
unsigned short var_3 = (unsigned short)51474;
unsigned short var_4 = (unsigned short)35491;
unsigned short var_8 = (unsigned short)29314;
signed char var_9 = (signed char)-58;
unsigned long long int var_10 = 1480835380647256751ULL;
int zero = 0;
unsigned int var_11 = 359333356U;
unsigned long long int var_12 = 16884287720260470150ULL;
short var_13 = (short)-2579;
unsigned char var_14 = (unsigned char)244;
unsigned char var_15 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
