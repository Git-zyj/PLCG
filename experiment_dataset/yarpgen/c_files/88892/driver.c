#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
unsigned short var_1 = (unsigned short)34279;
signed char var_3 = (signed char)49;
int var_4 = 1107243366;
unsigned short var_5 = (unsigned short)40215;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-65;
int zero = 0;
long long int var_10 = 7376634301929495779LL;
long long int var_11 = 4331223326364998851LL;
signed char var_12 = (signed char)(-127 - 1);
unsigned long long int var_13 = 11921554042232294035ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
