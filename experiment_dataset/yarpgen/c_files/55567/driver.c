#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26103;
unsigned short var_8 = (unsigned short)10741;
int zero = 0;
unsigned short var_10 = (unsigned short)57954;
short var_11 = (short)15502;
signed char var_12 = (signed char)-83;
unsigned int var_13 = 547936606U;
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
