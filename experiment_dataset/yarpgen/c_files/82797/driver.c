#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 578100842U;
unsigned short var_2 = (unsigned short)38093;
unsigned char var_3 = (unsigned char)160;
unsigned short var_5 = (unsigned short)31410;
signed char var_6 = (signed char)-32;
signed char var_7 = (signed char)38;
unsigned long long int var_8 = 5233393529829241540ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 375642340670029422LL;
unsigned char var_11 = (unsigned char)154;
int zero = 0;
long long int var_12 = -4275866713701131146LL;
unsigned long long int var_13 = 15662101512784786727ULL;
unsigned int var_14 = 1809429315U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
