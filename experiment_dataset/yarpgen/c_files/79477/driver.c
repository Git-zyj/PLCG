#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-20;
unsigned short var_9 = (unsigned short)55440;
unsigned short var_10 = (unsigned short)24632;
signed char var_11 = (signed char)11;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)80;
unsigned char var_19 = (unsigned char)239;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
