#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
long long int var_1 = 1998434825761342469LL;
unsigned short var_5 = (unsigned short)48336;
signed char var_6 = (signed char)-114;
unsigned char var_7 = (unsigned char)44;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -176364776;
unsigned short var_12 = (unsigned short)26036;
unsigned int var_13 = 418330478U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
