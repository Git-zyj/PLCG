#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28783;
short var_3 = (short)-20084;
unsigned long long int var_13 = 7328349718064490818ULL;
unsigned int var_14 = 2492295517U;
unsigned int var_17 = 4186438860U;
unsigned long long int var_18 = 16501695456498520721ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)32;
unsigned long long int var_21 = 11791099413951779608ULL;
unsigned short var_22 = (unsigned short)60069;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
