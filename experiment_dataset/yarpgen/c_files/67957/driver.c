#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9477144469331186411ULL;
unsigned int var_8 = 1672532595U;
unsigned char var_12 = (unsigned char)11;
short var_15 = (short)26801;
int zero = 0;
int var_18 = 189283349;
unsigned short var_19 = (unsigned short)52444;
unsigned int var_20 = 2133655745U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
