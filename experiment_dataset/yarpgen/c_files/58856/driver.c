#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2014833936U;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)31;
unsigned char var_4 = (unsigned char)252;
signed char var_10 = (signed char)46;
unsigned int var_11 = 112413825U;
unsigned long long int var_13 = 1675927883678182447ULL;
int zero = 0;
unsigned int var_15 = 1287830293U;
unsigned short var_16 = (unsigned short)15386;
unsigned int var_17 = 3393874963U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
