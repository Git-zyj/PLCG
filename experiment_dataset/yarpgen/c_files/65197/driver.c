#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7424583839764445647ULL;
unsigned char var_4 = (unsigned char)31;
unsigned char var_6 = (unsigned char)48;
signed char var_8 = (signed char)98;
unsigned char var_12 = (unsigned char)164;
unsigned char var_13 = (unsigned char)224;
unsigned char var_18 = (unsigned char)6;
signed char var_19 = (signed char)115;
int zero = 0;
unsigned char var_20 = (unsigned char)190;
unsigned long long int var_21 = 9038599547428632030ULL;
int var_22 = -1075201087;
unsigned char var_23 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
