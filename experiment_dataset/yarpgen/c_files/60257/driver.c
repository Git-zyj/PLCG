#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64302;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)39711;
unsigned short var_6 = (unsigned short)52814;
unsigned char var_9 = (unsigned char)12;
int zero = 0;
unsigned short var_13 = (unsigned short)21297;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
