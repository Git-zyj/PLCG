#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
unsigned short var_1 = (unsigned short)1142;
unsigned char var_3 = (unsigned char)115;
unsigned long long int var_5 = 5039084915639654957ULL;
int var_6 = 847306848;
unsigned long long int var_8 = 8454984482719345777ULL;
_Bool var_9 = (_Bool)0;
int var_11 = -715292095;
int zero = 0;
unsigned char var_13 = (unsigned char)15;
int var_14 = 605931772;
unsigned long long int var_15 = 5714070247353715324ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
