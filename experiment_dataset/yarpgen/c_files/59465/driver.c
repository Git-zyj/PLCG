#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1171455229;
short var_6 = (short)9245;
unsigned long long int var_16 = 16087749398150528000ULL;
unsigned char var_17 = (unsigned char)244;
short var_18 = (short)-6966;
int zero = 0;
short var_19 = (short)-11968;
unsigned int var_20 = 2565781202U;
_Bool var_21 = (_Bool)1;
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
