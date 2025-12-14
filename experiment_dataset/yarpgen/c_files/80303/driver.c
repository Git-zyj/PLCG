#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1193078939;
short var_6 = (short)25753;
signed char var_8 = (signed char)95;
short var_11 = (short)29087;
int zero = 0;
unsigned short var_18 = (unsigned short)26561;
signed char var_19 = (signed char)104;
unsigned int var_20 = 1059317145U;
unsigned long long int var_21 = 14939174885089912005ULL;
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
