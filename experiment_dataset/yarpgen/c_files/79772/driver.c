#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 792111156959434814LL;
unsigned short var_3 = (unsigned short)48910;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 60978428U;
signed char var_8 = (signed char)-72;
int var_9 = -784050797;
unsigned short var_11 = (unsigned short)57799;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)225;
unsigned char var_15 = (unsigned char)64;
short var_16 = (short)10203;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
