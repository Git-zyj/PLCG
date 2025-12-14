#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)6138;
long long int var_7 = 8171754940344591907LL;
unsigned short var_8 = (unsigned short)41730;
unsigned short var_9 = (unsigned short)47853;
unsigned long long int var_10 = 18325705588549325186ULL;
unsigned short var_11 = (unsigned short)14278;
signed char var_12 = (signed char)-12;
int zero = 0;
unsigned long long int var_13 = 16432609847843167408ULL;
unsigned char var_14 = (unsigned char)58;
unsigned long long int var_15 = 5120818579292111127ULL;
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
