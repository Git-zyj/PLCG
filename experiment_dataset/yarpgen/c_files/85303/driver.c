#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13842;
unsigned char var_3 = (unsigned char)78;
int var_6 = 1056826712;
long long int var_7 = 1804533058864635718LL;
unsigned long long int var_8 = 1548501690916346271ULL;
unsigned short var_9 = (unsigned short)7024;
int zero = 0;
unsigned short var_10 = (unsigned short)15198;
unsigned long long int var_11 = 10574954978236376370ULL;
unsigned short var_12 = (unsigned short)28284;
unsigned long long int var_13 = 2088061116834092908ULL;
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
