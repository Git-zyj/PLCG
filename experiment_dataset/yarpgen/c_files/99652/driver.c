#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-36;
long long int var_8 = -7590132450646446110LL;
int var_9 = -402887910;
unsigned short var_12 = (unsigned short)55976;
signed char var_15 = (signed char)21;
unsigned short var_17 = (unsigned short)5325;
int zero = 0;
unsigned long long int var_19 = 6213335397794050843ULL;
unsigned short var_20 = (unsigned short)3232;
short var_21 = (short)24802;
void init() {
}

void checksum() {
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
