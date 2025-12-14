#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5438579285619349892ULL;
unsigned char var_2 = (unsigned char)110;
unsigned char var_3 = (unsigned char)108;
signed char var_4 = (signed char)-21;
unsigned int var_5 = 1389518049U;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 1512785110U;
signed char var_18 = (signed char)-8;
int zero = 0;
int var_20 = 270434096;
unsigned char var_21 = (unsigned char)35;
signed char var_22 = (signed char)48;
unsigned long long int var_23 = 3327953976617260531ULL;
void init() {
}

void checksum() {
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
