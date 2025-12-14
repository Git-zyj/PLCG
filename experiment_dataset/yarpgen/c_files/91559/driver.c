#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3018593480U;
signed char var_5 = (signed char)29;
signed char var_14 = (signed char)-122;
unsigned int var_15 = 2918442009U;
int var_18 = 243454601;
signed char var_19 = (signed char)2;
int zero = 0;
signed char var_20 = (signed char)-110;
signed char var_21 = (signed char)-45;
signed char var_22 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
