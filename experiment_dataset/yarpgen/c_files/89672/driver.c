#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned int var_1 = 2908541336U;
unsigned long long int var_3 = 6745468244439467978ULL;
_Bool var_4 = (_Bool)0;
short var_10 = (short)28140;
int zero = 0;
unsigned long long int var_12 = 9446645918427434404ULL;
short var_13 = (short)-1905;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
