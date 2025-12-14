#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4447165718226406933LL;
_Bool var_4 = (_Bool)1;
long long int var_6 = -3131040897768495898LL;
int zero = 0;
unsigned char var_15 = (unsigned char)103;
unsigned char var_16 = (unsigned char)229;
void init() {
}

void checksum() {
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
