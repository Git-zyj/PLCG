#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
short var_6 = (short)20502;
short var_7 = (short)20285;
unsigned short var_9 = (unsigned short)5410;
unsigned short var_13 = (unsigned short)33280;
int zero = 0;
unsigned short var_19 = (unsigned short)61787;
_Bool var_20 = (_Bool)1;
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
