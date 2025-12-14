#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -549558695;
unsigned short var_4 = (unsigned short)48462;
unsigned short var_5 = (unsigned short)51617;
unsigned short var_7 = (unsigned short)48110;
unsigned char var_8 = (unsigned char)120;
signed char var_10 = (signed char)-10;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-110;
void init() {
}

void checksum() {
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
