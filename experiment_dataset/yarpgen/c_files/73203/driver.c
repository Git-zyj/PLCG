#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9933571923035996344ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)191;
unsigned char var_7 = (unsigned char)156;
unsigned char var_11 = (unsigned char)152;
int zero = 0;
unsigned char var_14 = (unsigned char)12;
unsigned int var_15 = 1260959136U;
unsigned int var_16 = 2978867954U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
