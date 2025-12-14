#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30367;
signed char var_3 = (signed char)82;
unsigned long long int var_4 = 4123376281205768869ULL;
_Bool var_5 = (_Bool)0;
long long int var_10 = 8615214975334727753LL;
short var_12 = (short)11297;
int zero = 0;
unsigned char var_17 = (unsigned char)127;
unsigned long long int var_18 = 6277426277070936011ULL;
unsigned char var_19 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
