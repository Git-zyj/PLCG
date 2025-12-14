#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)174;
signed char var_5 = (signed char)-15;
unsigned int var_6 = 3240302316U;
unsigned char var_7 = (unsigned char)139;
int zero = 0;
int var_10 = 553059694;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
