#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)47;
unsigned char var_4 = (unsigned char)38;
unsigned int var_5 = 153179600U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)170;
signed char var_12 = (signed char)36;
int zero = 0;
int var_19 = -127958604;
signed char var_20 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
