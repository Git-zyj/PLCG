#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2331766720U;
int var_1 = 1122429050;
int var_2 = -996251284;
unsigned int var_3 = 728689614U;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)187;
unsigned char var_6 = (unsigned char)114;
int var_7 = 1085900788;
unsigned int var_8 = 3066741804U;
int var_9 = -641715960;
int var_10 = -1184490579;
int var_11 = 1545325624;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)167;
unsigned int var_14 = 2473064564U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
