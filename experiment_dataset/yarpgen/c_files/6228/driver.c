#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
long long int var_2 = -5336209042425290915LL;
signed char var_3 = (signed char)-117;
unsigned long long int var_5 = 4495081366915199424ULL;
unsigned long long int var_7 = 7246616969761478735ULL;
long long int var_8 = 3115062603730999932LL;
int zero = 0;
signed char var_12 = (signed char)-41;
unsigned char var_13 = (unsigned char)1;
void init() {
}

void checksum() {
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
