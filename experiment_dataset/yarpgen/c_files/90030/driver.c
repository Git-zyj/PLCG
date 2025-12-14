#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)97;
unsigned long long int var_8 = 743391871375206798ULL;
unsigned char var_9 = (unsigned char)98;
unsigned int var_15 = 2733761983U;
unsigned long long int var_16 = 15095396211276385731ULL;
int zero = 0;
signed char var_20 = (signed char)-49;
unsigned int var_21 = 1749976522U;
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
