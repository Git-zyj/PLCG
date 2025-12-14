#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2740375275866962573ULL;
unsigned char var_5 = (unsigned char)191;
unsigned char var_6 = (unsigned char)195;
unsigned short var_7 = (unsigned short)22954;
unsigned int var_9 = 3452751651U;
unsigned char var_10 = (unsigned char)12;
signed char var_12 = (signed char)84;
int zero = 0;
unsigned long long int var_15 = 4201236483666475671ULL;
unsigned short var_16 = (unsigned short)23088;
void init() {
}

void checksum() {
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
