#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
unsigned char var_3 = (unsigned char)30;
_Bool var_12 = (_Bool)1;
unsigned int var_17 = 3063504798U;
int zero = 0;
unsigned long long int var_18 = 267146526966389739ULL;
unsigned int var_19 = 2139589277U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3176886864U;
long long int var_22 = 6951441829928791031LL;
long long int var_23 = 7550508039220807876LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
