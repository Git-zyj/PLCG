#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 727995367U;
unsigned char var_1 = (unsigned char)27;
signed char var_3 = (signed char)-43;
unsigned char var_17 = (unsigned char)152;
unsigned short var_18 = (unsigned short)36270;
int zero = 0;
unsigned long long int var_19 = 13613252318073974545ULL;
long long int var_20 = -1833650427719736676LL;
unsigned short var_21 = (unsigned short)41303;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
