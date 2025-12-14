#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32205;
long long int var_6 = 1591885544895332512LL;
unsigned long long int var_9 = 11044767906440983149ULL;
unsigned long long int var_12 = 4259674652938257815ULL;
int zero = 0;
signed char var_18 = (signed char)-9;
unsigned int var_19 = 2717644827U;
long long int var_20 = 9045959088705241189LL;
unsigned char var_21 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
