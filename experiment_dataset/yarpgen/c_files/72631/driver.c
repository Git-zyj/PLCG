#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5122499428518170359LL;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)102;
signed char var_14 = (signed char)-4;
int zero = 0;
int var_19 = -1411013039;
unsigned int var_20 = 2754728503U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
