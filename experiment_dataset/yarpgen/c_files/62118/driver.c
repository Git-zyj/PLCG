#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1157617807U;
unsigned char var_7 = (unsigned char)249;
unsigned char var_8 = (unsigned char)109;
signed char var_10 = (signed char)-87;
_Bool var_11 = (_Bool)1;
long long int var_13 = -6670539083330213796LL;
signed char var_15 = (signed char)-2;
long long int var_17 = 5673640640535557799LL;
int zero = 0;
unsigned char var_20 = (unsigned char)106;
long long int var_21 = -4313712352798712813LL;
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
