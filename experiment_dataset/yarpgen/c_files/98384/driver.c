#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -913471786;
unsigned long long int var_2 = 14259804831500877827ULL;
unsigned char var_3 = (unsigned char)66;
int var_6 = 133722183;
unsigned int var_8 = 1139516748U;
int var_10 = 151489328;
unsigned char var_11 = (unsigned char)95;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -246230442;
int var_14 = 1071541699;
void init() {
}

void checksum() {
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
