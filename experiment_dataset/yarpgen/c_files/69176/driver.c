#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)102;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-63;
unsigned int var_9 = 2485200731U;
long long int var_10 = 7992348083618979101LL;
short var_11 = (short)-23419;
int zero = 0;
short var_13 = (short)21614;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
