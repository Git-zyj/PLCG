#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -483628806;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)129;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)41;
unsigned long long int var_11 = 10429740925580740688ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2145798153U;
unsigned long long int var_15 = 13295396981479705017ULL;
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
