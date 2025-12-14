#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25948;
unsigned short var_1 = (unsigned short)751;
unsigned char var_3 = (unsigned char)199;
unsigned int var_4 = 2927318463U;
unsigned char var_6 = (unsigned char)172;
int zero = 0;
long long int var_12 = -5062163612578496458LL;
unsigned short var_13 = (unsigned short)37465;
unsigned long long int var_14 = 17443199134426980952ULL;
unsigned char var_15 = (unsigned char)71;
signed char var_16 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
