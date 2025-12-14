#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)-48;
signed char var_13 = (signed char)60;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)185;
signed char var_16 = (signed char)-70;
unsigned char var_19 = (unsigned char)117;
int zero = 0;
int var_20 = -1280603111;
int var_21 = 1724742434;
unsigned short var_22 = (unsigned short)24917;
unsigned char var_23 = (unsigned char)229;
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
