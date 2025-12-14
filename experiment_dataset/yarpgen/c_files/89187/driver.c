#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
int var_2 = -1980153034;
unsigned long long int var_5 = 813685657449045095ULL;
unsigned char var_6 = (unsigned char)234;
unsigned char var_7 = (unsigned char)151;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)221;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2355956940U;
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
