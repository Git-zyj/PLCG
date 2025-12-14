#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52705;
unsigned short var_4 = (unsigned short)696;
unsigned short var_8 = (unsigned short)52606;
_Bool var_9 = (_Bool)1;
unsigned short var_16 = (unsigned short)44801;
int zero = 0;
signed char var_17 = (signed char)-71;
signed char var_18 = (signed char)3;
unsigned short var_19 = (unsigned short)16542;
unsigned short var_20 = (unsigned short)12025;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
