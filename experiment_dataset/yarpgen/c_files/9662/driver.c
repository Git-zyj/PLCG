#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2008670406U;
unsigned int var_5 = 2997151539U;
signed char var_6 = (signed char)11;
unsigned short var_7 = (unsigned short)52032;
short var_8 = (short)-20153;
unsigned long long int var_9 = 3615635325182809588ULL;
unsigned long long int var_10 = 14023402539993006524ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)189;
unsigned char var_13 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
