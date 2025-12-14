#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)42;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)38886;
int zero = 0;
signed char var_18 = (signed char)-63;
unsigned short var_19 = (unsigned short)13971;
signed char var_20 = (signed char)31;
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
