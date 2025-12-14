#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -33078788;
unsigned long long int var_7 = 15203303697996973518ULL;
unsigned char var_13 = (unsigned char)241;
unsigned short var_16 = (unsigned short)49554;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)46278;
unsigned int var_19 = 1892873375U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 1380620043948474120ULL;
unsigned long long int var_22 = 18082604363902690227ULL;
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
