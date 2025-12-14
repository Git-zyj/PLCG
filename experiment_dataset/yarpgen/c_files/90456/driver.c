#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16370324975323239679ULL;
signed char var_4 = (signed char)36;
unsigned short var_5 = (unsigned short)37879;
unsigned char var_11 = (unsigned char)154;
unsigned int var_12 = 1113854889U;
unsigned int var_14 = 920818763U;
_Bool var_16 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 4841015546973356265LL;
unsigned long long int var_21 = 17014304038817761842ULL;
void init() {
}

void checksum() {
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
