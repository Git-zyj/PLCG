#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9685461446623866715ULL;
unsigned char var_7 = (unsigned char)90;
short var_9 = (short)-10883;
unsigned int var_10 = 1742882126U;
unsigned long long int var_11 = 16020866754851421928ULL;
unsigned long long int var_14 = 14774237509578434256ULL;
unsigned int var_19 = 3067619658U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)219;
_Bool var_22 = (_Bool)1;
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
