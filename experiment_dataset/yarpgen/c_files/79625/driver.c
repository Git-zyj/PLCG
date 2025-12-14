#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11268436138928711836ULL;
unsigned long long int var_3 = 1874934906103426387ULL;
unsigned long long int var_9 = 8889484607323141866ULL;
short var_10 = (short)29346;
unsigned char var_11 = (unsigned char)229;
unsigned long long int var_12 = 8993766430714559748ULL;
int var_13 = -459124263;
int var_14 = -829788961;
int zero = 0;
int var_17 = -43399152;
int var_18 = 333585705;
_Bool var_19 = (_Bool)0;
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
