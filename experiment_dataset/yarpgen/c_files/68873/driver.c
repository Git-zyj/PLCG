#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 184334093U;
unsigned int var_3 = 354755865U;
unsigned long long int var_4 = 7336182195235592378ULL;
signed char var_11 = (signed char)-109;
int zero = 0;
int var_12 = 1206263257;
int var_13 = -1373585162;
short var_14 = (short)25176;
unsigned short var_15 = (unsigned short)8958;
unsigned long long int var_16 = 4900981995914946729ULL;
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
