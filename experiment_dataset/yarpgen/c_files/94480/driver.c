#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)60061;
unsigned short var_6 = (unsigned short)25791;
short var_7 = (short)13038;
unsigned short var_9 = (unsigned short)25171;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3664721770U;
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
