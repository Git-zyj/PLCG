#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1756256742548459148ULL;
unsigned int var_6 = 2493451263U;
unsigned long long int var_10 = 14084211641975123060ULL;
int var_12 = -743465612;
short var_14 = (short)12200;
unsigned int var_15 = 335989234U;
unsigned char var_16 = (unsigned char)13;
signed char var_17 = (signed char)-108;
unsigned char var_18 = (unsigned char)43;
int zero = 0;
unsigned int var_20 = 950957808U;
signed char var_21 = (signed char)39;
_Bool var_22 = (_Bool)1;
long long int var_23 = 7638113442876342962LL;
unsigned char var_24 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
