#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
short var_2 = (short)-18542;
short var_3 = (short)-11394;
short var_5 = (short)15026;
unsigned char var_7 = (unsigned char)21;
unsigned char var_12 = (unsigned char)79;
int zero = 0;
unsigned char var_20 = (unsigned char)128;
short var_21 = (short)1181;
unsigned char var_22 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
