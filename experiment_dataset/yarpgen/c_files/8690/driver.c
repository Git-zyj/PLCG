#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
unsigned long long int var_2 = 14522487396785165381ULL;
short var_3 = (short)-25921;
unsigned int var_4 = 2621781047U;
signed char var_5 = (signed char)-4;
signed char var_8 = (signed char)-110;
short var_9 = (short)30534;
short var_10 = (short)9816;
int zero = 0;
unsigned long long int var_11 = 2545130850536336384ULL;
short var_12 = (short)5201;
unsigned int var_13 = 2217309586U;
unsigned long long int var_14 = 16419892177653682290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
